// Declaring pointers
#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p,*q; // pointers(store the address of variable a and b respectively)
    p=&a; // assign the address of variable a
    q=&b; // assign the address of variable b
    printf("Value in a: %d\n",a);
    printf("Value in pointer: %d\n",*p);
    printf("Address of a: %x\n",&a); //(%x return value in hexadecimal form)
    printf("Value in pointer p: %x\n",p);
    printf("Address of pointer p: %x\n",&p);

    printf("Value in b: %d\n",b);
    printf("Value in pointer: %d\n",*q);
    printf("Address of b: %x\n",&b);
    printf("Value in pointer q: %x\n",q);
    printf("Address of pointer q: %x\n",&q);
    
}