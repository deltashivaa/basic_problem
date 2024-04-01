
#include<stdio.h>
#include<stdlib.h>
void CountFreuency(int Arr[],int Size);

int main()
{
    int A[200],i,n;
    printf("enter the Size of Array: ");
    scanf("%d",&n);

    printf("Enter the Elements in the Row: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    CountFreuency(A,n);
    return EXIT_SUCCESS;
}

void CountFreuency(int Arr[],int Size)
{

    int B[100],i,j,Count=0;

    for(i=0;i<Size;i++)
    {
        Count=1;
        if(Arr[i]!=-1)
        {
            for(j=i+1;j<Size;j++)
            {
                if(Arr[i]==Arr[j])
                {
                    Count++;
                    Arr[j]=-1;
                }
                 B[i]=Count;
            }
        }
    }
     for(i=0;i<Size;i++)
     {
         if(Arr[i]!=-1)
         {
             printf("%d Freuency is :%d\n",Arr[i],B[i]);
         }
     }

}


