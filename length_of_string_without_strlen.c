#include<stdio.h>
#include<ctype.h>
#include<string.h>
// int length_of_string(char* str)
// {
//     int count=0;
    
//     while(*str!='\0')
//     {
//         char c=tolower(*str);
//         if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//         {
//           count++;
//         }
//         str++;
//     }
//     return count;
// }
int main()
{
    char str[100];
    int length;
    gets(str);
    //length=length_of_string(str);
    length=strlen(str);

    printf("%d",length);
    return 0;
}