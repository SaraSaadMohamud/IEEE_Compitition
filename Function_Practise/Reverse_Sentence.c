#include <stdio.h>
#include <stdlib.h>
#include "string.h"
void Print_Reverse(char Sen[],char R_Sen[],int Size,int Lenght);

char String[100];
char R_String[100];
int lenght=0;

int main()
{
    printf("Enter the Sentance : ");
    gets(String);

    lenght=strlen(String);
    int Size=(lenght-1);

    Print_Reverse(String,R_String,lenght-1,0);
    printf("%s",R_String);
    return 0;
}
void Print_Reverse(char Sen[],char R_Sen[],int Size,int Lenght_1)
{
    R_Sen[Lenght_1]=Sen[Size];
    if(Lenght_1 <lenght )
    {
        Print_Reverse(Sen,R_Sen,--Size,++Lenght_1);
    }
}
