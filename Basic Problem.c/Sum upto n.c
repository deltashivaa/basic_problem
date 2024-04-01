#include<stdio.h>
#include<stdlib.h>
int SumofNum(int a,int b);

int main()
{
    int IntialNum,LastNum,Sum=0,i;
    printf("Enter the IntialNumber: ");
    scanf("%d",&IntialNum);
    printf("Enter the LastNumber: ");
    scanf("%d",&LastNum);

    Sum=SumofNum(IntialNum,LastNum);
    printf("%d",Sum);
    return EXIT_SUCCESS;
}

int SumofNum(int a,int b)
    {
        int i,Sum=0;
    for(i=a;i<=b;i++)
        {
            Sum=Sum+i;
        }
      return Sum;
    }
