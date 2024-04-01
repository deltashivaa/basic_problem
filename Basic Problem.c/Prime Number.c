#include<stdio.h>
#include<stdlib.h>
int main()
{
    int Number;
    printf("Enter the Input: ");
    scanf("%d",&Number);

    if (Number%2==0)
    {
        printf("The Number %d is prime ",Number);
    }
    else
    {
        printf("The Number %d is Not prime ",Number);

    }

    return EXIT_SUCCESS;
}
