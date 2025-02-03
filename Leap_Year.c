#include<stdio.h>
void leap_year(int a)
{
    if(a%400==0 || (a%100!=0 && a%4==0))
    {
        printf("LEAP YEAR");
    }else
    {
        printf("NOT A LEAP YEAR");
    }
}
int  main()
{
    int a;
    scanf("%d",&a);
    leap_year(a);
}