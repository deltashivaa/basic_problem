/*fibonacci series is means the next term is the sum of two previous
Number*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Num,Result,i;
    printf("Enter the Number: ");
    scanf("%d",&Num);

    int a=0,b=1;
    printf("The Fibonacci Series is: ");

    for(i=1;i<Num;i++)
    {
        printf("%d ",a);
        Result = a+b;
        a=b;
        b=Result;
    }

    return EXIT_SUCCESS;
}
