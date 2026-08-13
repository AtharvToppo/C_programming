// Reverse of a string without using in-build function.
#include <stdio.h>
#include <string.h>
# define N 50
int main()
{
    char str[N];
    printf("Reverse of a string!!!\n");
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    // Remove a new line character from fgets finction
    str[strcspn(str,"\n")]='\0';
    printf("String: ");
    puts(str);
    
    // strlen is used for finding the lenght of string.
    int size=strlen(str);
    char temp;
    for(int i=0;i<size/2;i++)
    {
        // swapping of two characters by using third variable
        temp=str[i];
        str[i]=str[size-1-i];
        str[size-1-i]=temp;
    }
    printf("Reverse of string: %s",str);
    return 0;
}