// Print the 2D array and calculate the sum.
#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows,cols,sum=0;
    printf("Enter the rows of the 2D array: ");
    scanf("%d",&rows);
    printf("Enter the columns of the 2D array: ");
    scanf("%d",&cols);
    
    printf("Enter the elements of the 2D array(Matrix): ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&matrix[i][j]);
            sum+=matrix[i][j];
        }
    }
    
    printf("Elements of the 2D array(Matrix):\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the elements of the 2D array(Matrix) is %d",sum);
    
    return 0;
}