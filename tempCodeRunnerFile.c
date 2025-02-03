#include<stdio.h>
#include<stdlib.h>
struct array
{
    //int *A;
    int A[20];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("Elements are \n");
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
void append(struct array *arr,int x)
{
    if(arr->length<arr->size)
    {
    arr->A[arr->length++]=x;
    }
}
void insert(struct array *arr,int index,int value)
{
    if(index>=0&&index<arr->length)
    {
    for(int i=arr->length;i>index;i--)
    {
        arr->A[i]=arr->A[i-1];
        
    }
    arr->A[index]=value;
        arr->length++;
    }
}
int main()
{
    //struct array arr;
    struct array arr={{2,3,4,5,6},10,5};
    // int n,i;
    // printf("Enter size of an array:\n");
    // scanf("%d",&arr.size);
    // arr.A=(int*)malloc(arr.size*sizeof(int));
    // arr.length=0;
    // printf("Enter no of numbers\n");
    // scanf("%d",&n);
    //  printf("Enter all elements\n");
    // for(i=0;i<n;i++)
    // {
    //     scanf("%d",&arr.A[i]);
    // }
    // arr.length=n;
    //append(&arr,7);
    insert(&arr,0,12);
    display(arr);
    
}
