// Compare two strings using pre-define function.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10],str2[10];
    int result;
    printf("Comparsion of two strings using pre-define function!!!\n");
    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin);
    
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    printf("First string: ");
    puts(str1);
    printf("First string: ");
    puts(str2);

    // strcmp is used to compare two strings
    result=strcmp(str1,str2);
    if(result==0)
    {
        printf("Strings are same!");
    }
    else
    {
        printf("Strings are not same!");
    }
    return 0;
}