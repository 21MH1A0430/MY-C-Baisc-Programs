#include<stdio.h>
#include<ctype.h>
void remove_vowels(char* str)
{
    int i=0,j=0;
    while(str[i])
    {
        char c=tolower(str[i]);
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')
        {
            str[j++]=str[i];

        }
        i++;
    }
    str[j]='\0';
}
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    remove_vowels(str);
    printf("%s",str);
}