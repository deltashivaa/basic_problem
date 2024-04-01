#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Num,n,s=0;
    printf("Enter the Number: ");
    scanf("%d",&Num);

    while(Num!=0)
    {
        n=Num%10;
        s=s+n;
        Num=Num/10;
    }
    printf("%d",s);
return EXIT_SUCCESS;
}
