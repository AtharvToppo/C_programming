// Addition of two matrix.
#include <stdio.h>

int main(){
    int mat1[10][10],mat2[10][10];
    int rows,cols;
    printf("Enter the rows of the Matrix: ");
    scanf("%d",&rows);
    printf("Enter the columns of the Matrix: ");
    scanf("%d",&cols);
    
    printf("Enter the elements of the Matrix 1: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of the Matrix 2: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    
    printf("Elements of the Matrix 1:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Elements of the Matrix 2:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    
    printf("Addition of two matrix:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            mat1[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    return 0;
}