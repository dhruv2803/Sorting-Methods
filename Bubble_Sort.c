#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int size,i,j,flag=0;
    printf("Enter size of unsorted array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array:\n");
    for ( i = 0; i < size; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    //bubble sort
    for(i=0;i<size;i++)
    {
        for(j=size-1;j>i;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(&(arr[j]),&(arr[j-1]));
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    printf("Sorted array is:");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}