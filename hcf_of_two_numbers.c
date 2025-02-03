#include<stdio.h>
int hcf(int a,int b)
{
    int H=1;
    for(int i=1;i<=a||i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            H=i;
        }
    }
    return H;
}
int main()
{
    //int HCF=1;
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    // for(int i=1;i<=num1||i<=num2;i++)
    // {
    //     if(num1%i==0 && num2%i==0)
    //     {
    //         HCF=i;
    //     }
    // }
    int A=hcf(num1,num2);
    printf("%d",A);
    return 0;

}