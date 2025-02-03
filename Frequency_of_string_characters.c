#include<stdio.h>
#include<string.h>
void frequency_of_ch(char* str)
{
    char freq[256]={0};
    while(*str!='\0')
    {
        freq[(int)*str]++;//use (unsigned char) for " "
        str++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0 && i != '\n')
        {
            printf("%c =%d\n",i,freq[i]);
        }
    }
}
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
   // scanf("%s",str);
    //gets(str);
     int len=strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
   
    frequency_of_ch(str);
}