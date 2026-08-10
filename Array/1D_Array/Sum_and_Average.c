// To find the total marks and average of the students.
#include <stdio.h>
int main()
{
    int size,arr[50];
    float avg,sum=0;
    printf("Enter the numbers of students: ");
    scanf("%d",&size);
    printf("Enter the marks of the students: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    
    printf("Marks of the students: ");
    for(int j=0;j<size;j++)
    {
        printf("%d ",arr[j]);
    }
    
    avg=sum/size;
    printf("\nTotal marks of the students is %.3f",sum);
    printf("\nAverage marks of the students is %.3f",avg);
    return 0;
}