#include<stdio.h>
#include<ctype.h>
int isvowel(char c)
{
    c=toupper(c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        return 1;
    }else
    {
        return 0;
    }
}
int main()
{
    char c;
    scanf("%c",&c);
    if(isvowel(c))
    {
        printf("%c is a vowel",c);
    }else
    {
        printf("%c is a consonant",c);
    }
    return 0;
}