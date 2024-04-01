#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main()
{
    int Value,i,Digits=0,Temp,Result=0,Rem;

    printf("Enter the Value: ");
    scanf("%d",&Value);

    for(i=Value;i>0;i=i/10)
        Digits++;


    Temp=Value;

    while(Value!=0)
    {
        Rem=Value%10;
        Result = Result + pow(Rem,Digits);
        Value=Value/10;
    }
    //printf("%d",Result);

   if(Temp==Result)
    {
        printf("The %d is Armstrong Number! ",Temp);
        return 0;
    }
    else
    {
        printf("The %d is Not Armstrong Number! ",Temp);
        return 0;
    }
    getch();

    return EXIT_SUCCESS;
}
