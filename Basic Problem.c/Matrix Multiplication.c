#include<stdio.h>
#include<stdlib.h>

int main()
{

    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;

    printf("Enter the Row's and Coloumn's for 1st Matrix: ");
    scanf("%d%d",&m,&n);

        printf("Enter the Vlues 1st Matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the Row's and Coloumn's for 2nd Matrix: ");
    scanf("%d%d",&p,&q);

    if(n!=p)
    {
        printf("Cannot be Exit");
        exit(0);
    }

        printf("Enter the Vlues 1st Matrix: ");

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Matrix a:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }

    printf("Marrix b:\n");
      for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");

    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }

     printf("Marrix c:\n");
      for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");

    }

    return EXIT_SUCCESS;

}
