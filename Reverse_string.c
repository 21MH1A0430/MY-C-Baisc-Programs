#include<stdio.h>
#include<string.h>
void reverse_string(char str[],int len)
{
    int temp;
    for(int i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    //printf("%s",str);
   // return str;
}
int main()
{
    char str[1000];
   // scanf("%s",str);
   //gets(str);
   fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    reverse_string(str,len);
    printf("%s",str);
}