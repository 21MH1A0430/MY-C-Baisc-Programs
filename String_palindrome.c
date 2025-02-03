#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int string_palindrome(char str[],int len)
{
    int flag=0;
   for(int i=0;i<len/2;i++)
   {
    if(str[i]!=str[len-i-1])
    {
        flag++;
        break;
    }
   }
   return flag;
   

}
int main()
{
    char str[1000];
    scanf("%s",str);
    int len=strlen(str);
    int s=string_palindrome(str,len);
    if(s)
    {
        printf("string is not a palindrome");
    }else
    {
        printf("it is  a palindrome");
    }
}