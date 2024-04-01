#include<stdio.h>
#include<stdlib.h>

void Zerotail(int Arr[],int Size);

int main()
{
    int Size,i;
    printf("Enter the Size of the Array: ");
    scanf("%d",&Size);

    int Arr[Size];
    printf("Enter the Values in the Array: ");
    for(i=0;i<Size;i++)
        scanf("%d",&Arr[i]);
    Zerotail(Arr,Size);
    return EXIT_SUCCESS;
}

void Zerotail(int Arr[],int Size)
{
    int i,Count=0;
    int *Result=(int *)malloc(Size * sizeof(int));

    for(i=0;i<Size;i++)
    {
        if(Arr[i]!=0)
        {
            Result[Count]=Arr[i];
            Count++;
        }
    }
    for(i=Count;i<Size;i++)
        Result[i]=0;

    for(i=0;i<Size;i++)
        printf("%d ",Result[i]);

}

