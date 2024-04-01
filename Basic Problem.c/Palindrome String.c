#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main()
{
    char Str[100];
    int FirstWord,LastWord;
    printf("Enter the String: ");
    scanf("%s",&Str);

    FirstWord=0;
    LastWord=strlen(Str)-1;

    while(FirstWord<LastWord)
    {
        if(Str[FirstWord++]==Str[LastWord--])
        {
            printf("The given string %s Palindrome",Str);
            return EXIT_SUCCESS;
            //clrscr();
        }
        else
           printf("The given string %s Not-Palindrome",Str);
            return EXIT_SUCCESS;
           //clrscr();

    }
    return EXIT_SUCCESS;

}
