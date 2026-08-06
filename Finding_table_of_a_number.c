// Print the Table of a number
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to find a table of it: ");
    scanf("%d",&num);
    for(int i=1;i<11;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}