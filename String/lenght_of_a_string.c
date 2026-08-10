// Find the lenght of a String(using pre-defined function).
#include <stdio.h>
#include <string.h>
int main() 
{
    char name[50];
    int count;
    printf("Enter a name:");
    fgets(name,sizeof(name),stdin);
    printf("You entered:%s",name);
    // strlen is a pre-define function
    count=strlen(name);
    printf("Length of a String:%d",count);
    return 0;
}