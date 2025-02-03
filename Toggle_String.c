#include<stdio.h>
#include<ctype.h>
void toggle_string(char* str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str=tolower(*str);
        }
        else if(*str>='a' && *str<='z')
        {
            *str=toupper(*str);
        }
        str++;
    }
    
}
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    toggle_string(str);
    printf("%s",str);
}