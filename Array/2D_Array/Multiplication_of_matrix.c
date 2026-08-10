// Multiplication of two matrix
#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int rows1,cols1,rows2,cols2;
    printf("Multiplication of two matrix\nEnter the same number of columns of matrix 1 and rows of matrix 2 than the multiplication of two matrix is found.\n");
    printf("Enter the rows and columns of the Matrix 1: ");
    scanf("%d %d",&rows1,&cols1);

    printf("Enter the elements in matrix 1: ");
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<cols1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the rows and columns of the Matrix 2: ");
    scanf("%d %d",&rows2,&cols2);
    
    printf("Enter the elements in matrix 2: ");
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<cols2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("Matrix 1: \n");
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<cols1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("matrix 2: \n");
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<cols2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    
    if(cols1!=rows2)
    {
        printf("Matrix can not multipy");
    }
    else
    {
        printf("Multipication of two matrix: \n");
        // Multiplication of Matrix
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<cols2;j++)
            {
                int sum=0;
                for(int k=0;k<rows1;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}