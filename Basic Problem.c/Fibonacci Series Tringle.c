#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=1,b=1,n=5,Result,i,temp,arr[i],j;

    for(i=0;i<n;i++)
    {
        //printf("%d ",a);
        arr[i]=a;
        Result=a+b;
        temp=b;
        b=Result;
        a=temp;
        //Result=b;
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",arr[i]);
        }
    }

    return EXIT_SUCCESS;
}
