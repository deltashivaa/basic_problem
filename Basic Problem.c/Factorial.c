#include<stdio.h>
#include<stdlib.h>
int main()
{
    int Number,i;
    int Fact=1;
    printf("Enter the Number: ");
    scanf("%d",&Number);

    for(i=1;i<=Number;i++)
    {
        Fact=Fact*i;
    }
    printf("The Factorial of %d is %d",Number,Fact);
    return EXIT_SUCCESS;
}
