#include<stdio.h>
#include<string.h>
char* replace_ch_in_string(char str[],char a,char b,int len)
{
    //char result[100]="";
    for(int i=0;i<len;i++)
    {
        if(str[i]==a)
        {
            str[i]=b;
        }else if(str[i]==b)
        {
            str[i]=a;
        }
    }
    //result[len]='\0';
    return str;
}
int main()
{
    char str[1000],a,b;
    gets(str);
    scanf(" %c",&a);
    scanf(" %c",&b);
   // getchar();
    //fgets(str,sizeof(str),stdin);
    
    int len=strlen(str);
    replace_ch_in_string(str,a,b,len);
    printf("%s",str);
}