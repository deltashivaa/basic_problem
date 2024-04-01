#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ReplaceZero(int Num);

int main()
{
    int Num,Result;
    printf("Enter the number: ");
    scanf("%d",&Num);
    Result=ReplaceZero(Num);
    printf("The Number Replaced by 1: %d",Result);
    return EXIT_SUCCESS;
}

int ReplaceZero(int Num)
{
    int digit,i=0,Ans=0;

    while(Num>0)
    {
        digit = Num%10;

        if(digit == 0)
        {
           Ans=Ans+1*pow(10,i);
        }
        else
        {
          Ans=Ans+digit*pow(10,i);
        }
        i++;
        Num=Num/10;
    }
    return Ans;
}
