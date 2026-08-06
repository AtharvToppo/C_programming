// Take the input & print the array.
#include <stdio.h>
int main()
{
    int size,arr[100];
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Elements of the array: ");
    for(int j=0;j<size;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}