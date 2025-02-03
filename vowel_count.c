#include<stdio.h>
#include<ctype.h>
int vowels_count(char* str)
{
    int count=0;
    while(*str!='\0')
    {
        char ch=tolower(*str);
        //printf("%s",ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    
    printf("%d",vowels_count(str));
    return 0;
}
