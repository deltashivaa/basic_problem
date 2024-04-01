#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void  RemoveDuplicate(char str [],int Size);

int main()
{
    char str[100];
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);
    RemoveDuplicate(str,strlen(str));
    return EXIT_SUCCESS;
}

void RemoveDuplicate(char str [],int length)
{
    int i,k,j;

    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;k<length;k++)
                {
                    str[k]=str[k+1];
                }
                length--;
                j--;
            }
        }

    }
   str[length]='\0';
    printf("\nThe After Removal of Duplicate char: %s",str);

}
