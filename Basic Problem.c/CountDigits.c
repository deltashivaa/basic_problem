#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned long long int Num,ctr=0;
    printf("Enter the Number: ");
    scanf("%llu",&Num);

    while(Num!=0)
    {

        Num=Num/10;
        ctr++;

    }
    printf("%d",ctr);
    return EXIT_SUCCESS;
}







