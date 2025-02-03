#include<stdio.h>
int prime(int a,int b)
{
   for(int i=a;i<b;i++)
    {
        if(i % 2!=0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    prime(a,b);
    
}