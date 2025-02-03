#include<stdio.h> 
#include<stdlib.h> 
int sum_of_digits(char* str)
{
    int sum=0;
    while(*str!=0)
    {
        if ((*str >= '0') && (*str <= '9')) 
        {
            
            sum += (*str-'0'); 

        }
        str++;

    }
    return sum;
}
int main()
{
    
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i;
    int sum=sum_of_digits(str);
    printf("Sum of all digits:\n%d", sum);
    return 0; 
}