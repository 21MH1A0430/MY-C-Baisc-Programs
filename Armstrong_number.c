#include<stdio.h>
#include<math.h>
int power(int base,int exp)
{
    int result=1;
    for(int i=0;i<exp;i++)
    {
        result*=base;
    }
    return result;
}
int armstrong(int n,int count)
{
    int sum=0;
    while(n!=0)
    {
        int r=n%10;
        n=n/10;
        sum=sum+power(r,count);
    }
    return sum;

}
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int num=n;

    //int temp2=n;
    while(num!=0)
    {
        int r=num%10;
        num=num/10;
        count=count+1;
    }
   //printf("%d",armstrong(n,count));
   if(n==armstrong(n,count))
   {
    printf("It is an armstrong number");
   }else
   {
    printf("not an armstrong number");
   }
    //printf("%d",count);

}