#include<stdio.h>
#include<string.h>
#include<ctype.h>
void modify_string(char str[],int len)
{
    int first=0;
    for(int i=0;i<len;i++)
    {
    if(str[first] >='A'&&str[first] <= 'Z')
    {
        first++;
    }
    if(first)
    {
        str[i]=toupper(str[i]);
    }
    else
    {
        str[i]=tolower(str[i]);
    }
    }
}
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    modify_string(str,len);
    printf("%s",str);

}