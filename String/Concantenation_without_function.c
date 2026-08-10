// Concatenation of a String.
#include <stdio.h>
#include <string.h>
int main() 
{
    char name1[50],name2[10];
    printf("Enter a name 1:");
    fgets(name1,sizeof(name1),stdin);
    printf("Enter a name 2:");
    fgets(name2,sizeof(name2),stdin);
    
    // Remove newline charater because fgets automatic add a newline charater
    name1[strcspn(name1,"\n")]='\0';
    name2[strcspn(name2,"\n")]='\0';
    
    // puts also add a newline charater in the end of a string
    puts(name1);
    puts(name2);
    
    int len_name1,len_name2;
    // Find the length of string so use strlen pre-define function
    len_name1=strlen(name1);
    len_name2=strlen(name2);
    for(int i=0;i<=len_name2;i++)
    {
        name1[len_name1+i]=name2[i];
    }
    printf("Concatenation of two Strings:\n%s",name1);
    
    return 0;
}