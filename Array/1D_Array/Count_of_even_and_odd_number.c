// Count total number of even and odd in an array.
#include <stdio.h>

int main()
{
    int c_even=0,c_odd=0,size,arr[50];
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            c_even++;
        }
        else
        {
            c_odd++;
        }
    }
    printf("Elements of the array: ");
    for(int j=0;j<size;j++)
    {
        printf("%d ",arr[j]);
    }
    printf("\nCount of even number in array: %d",c_even);
    printf("\nCount of odd number in array: %d",c_odd);
    return 0;
}