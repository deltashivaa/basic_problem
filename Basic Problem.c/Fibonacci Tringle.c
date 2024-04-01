#include<stdio.h>
#include<stdlib.h>

int main()
{
    int limit,i,j,a,b,c,Temp;
    printf("Enter the Limit: ");
    scanf("%d",&limit);

    for(i=0;i<limit;i++)
    {
        a=0;
        b=1;

        for(j=0;j<=i;j++)
        {
            printf("%d ",b);
            c=a+b;
            Temp=a;
            a=b;
            b=c;
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
