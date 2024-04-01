#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Number,Rem,Rev=0,Orginal;
    printf("Enter the Number: ");
    scanf("%d",&Number);
    Orginal = Number;

    while(Number > 0)
    {
        Rem = Number%10;
        Rev = Rev*10+Rem;
        Number/=10;
    }

    if(Orginal == Rev)
    {
        printf("The Given Number %d is Palindrome",Orginal);
    }
    else
    {
        printf("The Given Number %d is Not Palindrome",Orginal);

    }

    return EXIT_SUCCESS;
}
