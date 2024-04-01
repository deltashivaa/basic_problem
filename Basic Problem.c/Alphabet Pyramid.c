#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,Row,space;

    printf("Enter a Row");
    scanf("%d",&Row);
    for(i=1;i<=Row;i++)
    {
        for(space=1;space<=Row-i;space++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {

            printf("%c ",j+64);
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%c ",k+64);
        }
        printf("\n");
    }


    return EXIT_SUCCESS;
}



