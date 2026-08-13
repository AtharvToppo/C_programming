// Reverse of a string using in-build function.
#include <stdio.h>
#include <string.h>
# define N 50
int main()
{
    char str[N];
    printf("Reverse of a string!!!\n");
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    printf("String: ");
    puts(str);

    // strrev is used to reverse a string
    strrev(str);
    printf("Reverse of string: %s",str);
    

    return 0;
}