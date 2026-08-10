// Create two arrays of the same size and store the sum of these arrays into a third array.
#include <stdio.h>

int main()
{
    int size,sum=0,arr1[50],arr2[50],arr3[50];
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    printf("Enter the elements of the array 1: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of the array 2: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    for(int j=0;j<size;j++)
    {
        arr3[j]=arr1[j]+arr2[j];
    }
    
    printf("Elements of the array 1: ");
    for(int k=0;k<size;k++)
    {
        printf("%d ",arr1[k]);
    }
    printf("\nElements of the array 2: ");
    for(int k=0;k<size;k++)
    {
        printf("%d ",arr2[k]);
    }
    printf("\nThe sum of two array's elements in the array 3: ");
    for(int k=0;k<size;k++)
    {
        printf("%d ",arr3[k]);
    }
    return 0;
}