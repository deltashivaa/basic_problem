#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int Binary,Rem,Decimal=0,Power=0;
    printf("Enter the Decimal Number: ");
    scanf("%d",&Binary);

    while(Binary!=0)
    {
        Rem = Binary%10;
        Decimal = Decimal+Rem*pow(2,Power);
        Binary = Binary/10;
        Power++;
    }

    printf("Decimal Value = %d",Decimal);

    return EXIT_SUCCESS;
}
