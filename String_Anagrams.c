#include<stdio.h>
#include<string.h>
int fun_anagram(char* str1,char str2[],int len)
{
    if(len!=strlen(str2))
    {
        return 0;
    }
    char count[256]={0};
    for(int i=0;i<len;i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned int)str2[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(count[i]!=0)
        {
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int len=strlen(str1);
    if(fun_anagram(str1,str2,len))
    {
        printf("Both are anagrams\n");
    }else
    {
        printf("Not anagrams\n");
    }
    return 0;

}