// Find the lenght of a String.
#include <stdio.h>
#include <string.h>
int main() 
{
    char name[50];
    printf("Enter a name:");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);
    int count=0,i=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Lenght of a String:%d",count);
    
    return 0;
}