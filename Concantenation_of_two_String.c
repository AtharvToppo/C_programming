// Concatenation of a String(using Pre-define function).
#include <stdio.h>
#include <string.h>
int main() 
{
    char name1[50],name2[10];
    printf("Enter a name 1:");
    fgets(name1,sizeof(name1),stdin);
    printf("Enter a name 2:");
    fgets(name2,sizeof(name2),stdin);
    printf("%s",name1);
    printf("%s",name2);
    
    // Remove newline charater because fgets automatic add a newline charater
    name1[strcspn(name1,"\n")]='\0';
    name2[strcspn(name2,"\n")]='\0';
    
    // Pre-define function for concatenation
    // Here "strcat(destination string,source string)"
    strcat(name1,name2);
    printf("Concatenation of two Strings:\n%s",name1);
    
    return 0;
}