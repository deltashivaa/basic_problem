#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a =10,b=20;

    b= b*a;
    a=b/a;
    b=b/a;

    printf("a=%d b=%d",a,b);
    return EXIT_SUCCESS;
}
