#include<stdio.h>
#include<string.h>
char palindrome(char *s)
{
    int len=strlen(s);

    int rev[len];
    int c=0;
    int ispal=1;
    for(int i=len-1;i>=0;i--)
    {
        rev[c]=s[i];
        c++;
    }
   
    for(int i=0;i<c;i++){
        if(s[i]!=rev[i]){
ispal=0;
break;
        }
    } 
    if(ispal){
        return 1;
    }
    else{
        return 0;
    }
    
 

}
int main()
{
    char s[9999];
    scanf("%s",s);
    if(palindrome(s)){
        printf("it is a pallindrome");
    }
    else{
        printf("NOt a pallindrome");
    }
 
}