// Comparsion of two strings.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10],str2[10];
    int flag=0;
    printf("Comparsion of two strings!!!\n");
    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin);
    
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    printf("First string: ");
    puts(str1);
    printf("Second string: ");
    puts(str2);
    
    // In this for loop it will check the characters in a string are same or not.
    for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        // If any character are different it will break the loop.
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }
    
    /*
    Check the value of flag, if the value of flag is 1 that means strings are different but if the value is 0 then the strings are same.
    */
    
    if(flag==1)
    {
        printf("Given strings are not same!");
    }
    else
    {
        printf("Given strings are same!");
    }
    
    return 0;
}