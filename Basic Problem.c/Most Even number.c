/*
#include<stdio.h>
#include<stdlib.h>
//int MostEven(int A[a],int a);

int MostEven(int a,int A[])
{
    int Currcounter=0;
    int Maxcounter=0;
    int i;

    for(i=0;i<a;i++)
    {
        if(A[i]%2==0)
          {

           Currcounter++;
          }
        else
          {
           if(Maxcounter<Currcounter)
           {
              Maxcounter = Currcounter;
           }
            Currcounter=0;
           }

    }
     if(Maxcounter<Currcounter)
           {
              Maxcounter = Currcounter;
           }
    return Maxcounter;

}


int main()
{
    int Size,i,Most;
    printf("Enter the Size of Array: ");
    scanf("%d",&Size);
    int Arr[Size];
    printf("Enter the values in Array: ");
    for(i=0;i<Size;i++)
        scanf("%d",&Arr[i]);
    Most=MostEven(Size,Arr);
    printf("%d",Most);
    return EXIT_SUCCESS;
}
*/

#include<stdio.h>
#include<stdlib.h>

int MostEven(int a, int A[]) {
    int Currcounter = 0;
    int Maxcounter = 0;
    int i;

    for (i = 0; i < a; i++) {
        if (A[i] % 2 == 0) {
            Currcounter++;
        } else {
            if (Maxcounter < Currcounter) {
                Maxcounter = Currcounter;
            }
            Currcounter = 0;
        }
    }
    if (Maxcounter < Currcounter) {
        Maxcounter = Currcounter;
    }
    return Maxcounter;
}

int main() {
    int Size, i, Most;
    printf("Enter the Size of Array: ");
    scanf("%d", &Size);
    int Arr[Size];
    printf("Enter the values in Array: ");
    for (i = 0; i < Size; i++)
        scanf("%d", &Arr[i]);
    Most = MostEven(Size, Arr);
    printf("The Most Even Number in your Arr is: %d", Most);
    return EXIT_SUCCESS;
}
