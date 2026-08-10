// Read and print a String.
#include <stdio.h>
int main() 
{
    char name[50];
    printf("Enter a name:");
    // fgets is used to take input from the user
    fgets(name,sizeof(name),stdin);
    // puts is used to print the output
    puts(name);
    return 0;
}