// To find the transpose of a matrix.
#include <stdio.h>

int main()
{
    int mat[10][10];
    int rows,cols;
    printf("Enter the rows of the Matrix: ");
    scanf("%d",&rows);
    printf("Enter the columns of the Matrix: ");
    scanf("%d",&cols);
    
    printf("Enter the elements of the Matrix: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf("Elements of the Matrix:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpose of a matrix:\n");
    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}