// Convert a string from upper case to lower case using in-build function.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
# define N 50
int main()
{
    char str[N];
    printf("Convert a string from Uppercase to Lowercase!!!\n");
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    // Remove a new line character from fgets finction
    str[strcspn(str,"\n")]='\0';
    printf("String: ");
    puts(str);
    
    // Pre-define function for converting uppercase character into lowercase character
    int len=lenstr(str);
    for(int i=0;i!='\0';i++)
    {
        str[i]=tolower((unsigned char)str[i]);
    }
    printf("Converted string: %s",str);
    return 0;
}