#include<stdio.h>
#include<string.h>
void reverse_array(int arr[],int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
void even_odd_pos(int arr[],int n)
{
    char evenpos[100]="";
    char oddpos[100]="";
    char buffer[100];
    for(int i=0;i<n;i++)
    {
        sprintf(buffer,"%d ",arr[i]);
        if(i%2==0)
        {
            strcat(evenpos,buffer);
        }else
        {
            strcat(oddpos,buffer);
        }
       
    }
    printf(" %s\n", evenpos);
    printf(" %s\n", oddpos);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    //int len=strlen(str);
    reverse_array(arr,n);
    even_odd_pos(arr,n);
    return 0;
}