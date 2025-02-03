#include<stdio.h>
#include<string.h>
#include<ctype.h>
char* removing_other_characters(char* str)
{
    char* rts=str;//if u do any modifications to rts it will affect the str also...
    while(*str!=0)
    {
        char ch=tolower(*str);
        if(ch>='a'&&ch<='z'&& ch!=' '&&ch!=')'&&ch!='(')
        {
            *rts=ch;
            rts++;
        }
        str++;
    }
    *rts='\0';
    return str;
    // printf("%s",*str);
}
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    removing_other_characters(str);
    printf("%s",str);
}