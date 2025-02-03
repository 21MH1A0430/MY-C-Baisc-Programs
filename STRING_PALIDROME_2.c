#include<stdio.h>
#include<string.h>
int def_palindrome(char str[],int len)
{
   int left=0;
   int right=len-1;
   while(left<right)
   {
    if(str[left]!=str[right])
    {
        return 0;
    }
    left++;
    right--;
   }
   return 1;
}
int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    if(def_palindrome(str,len))
    {
        printf("It is a palindrome\n");
    }else
    {
        printf("Not a palindrome\n");
    }
}