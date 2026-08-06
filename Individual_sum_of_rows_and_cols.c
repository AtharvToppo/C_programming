// Find the individual sum of rows and columns.
#include <stdio.h>

int main(){
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
    
    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<cols;j++)
        {
            sum+=mat[i][j];
        }
        printf("Sum of row %d : %d\n",i,sum);
    }
    
    for(int i=0;i<cols;i++)
    {
        int sum=0;
        for(int j=0;j<rows;j++)
        {
            sum+=mat[j][i];
        }
        printf("Sum of column %d : %d\n",i,sum);
    }
    

    return 0;
}