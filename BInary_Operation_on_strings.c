#include<string.h>
#include<stdio.h>
void binary_and(char str1[],char str2[])
{
    char result[100]="";
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]=='1'&&str2[i]=='1')
        {
            result[i] ='1';
        }else{
            result[i] ='0';
        }
    }
    result[strlen(str1)] = '\0';  // Null-terminate the string

    printf("%s",result);
    //return result;

}
void binary_or(char str1[],char str2[])
{
    char result[100]="";
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]=='1'||str2[i]=='1')
        {
            result[i]='1';
        }else{
            result[i]='0';
        }
    }
    result[strlen(str1)] = '\0';  // Null-terminate the string

    printf("%s",result);
   // return result;

}
void binary_xor(char str1[],char str2[])
{
    char result[100]="";
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]==str2[i])
        {
            result[i]='0';
        }else{
            result[i]='1';
        }
    }
    result[strlen(str1)] = '\0';  // Null-terminate the string

    printf("%s",result);
   // return result;

}
int main()
{
    char str1[100];
    char str2[100];
    char operator[100];
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",operator);
    if(strcmp(operator,"AND")==0)
    {
        binary_and(str1,str2);
    }
    else if(strcmp(operator,"OR")==0)
    {
        binary_or(str1,str2);
    }else
    {
        binary_xor(str1,str2);
    }

}