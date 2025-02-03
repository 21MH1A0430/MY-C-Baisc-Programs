#include<stdio.h>
int sum_of_digits(int num)
{
    int res=0,sum=0;
    while(num>0)
    {
    res=num%10;
    sum+=res;
    num=num/10;
    }
    return sum;
}
int main()
{
    int number;
    scanf("%d",&number);
    int r=sum_of_digits(number);
    printf("%d",r);
}