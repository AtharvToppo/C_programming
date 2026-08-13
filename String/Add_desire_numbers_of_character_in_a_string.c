// Concatenation of a String to add desire numbers of character in a string.
#include <stdio.h>
#include <string.h>
int main() 
{
    char name1[50],name2[10];
    int num;
    printf("Concatenate a String to add desire numbers of character in a string!!!\n");
    printf("Enter a first name:");
    fgets(name1,sizeof(name1),stdin);
    printf("Enter a  second name:");
    fgets(name2,sizeof(name2),stdin);
    printf("Enter numbers of character you want to concatenate: ");
    scanf("%d",&num);
    
    // Remove newline character because fgets automatic add a newline character
    name1[strcspn(name1,"\n")]='\0';
    name2[strcspn(name2,"\n")]='\0';
    
    // puts also adds a newline character at the end of a string
    printf("First string: ");
    puts(name1);
    printf("Second string: ");
    puts(name2);
    
    /*
    In this function, we can concatenate the fix number of characters by using "strncat(destination string, source string, number of characters);"
    */
    strncat(name1,name2,num);
    printf("Concatenation of two Strings: %s",name1);
    
    return 0;
}