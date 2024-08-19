#include <stdio.h>
#include <stdlib.h>
#include "string.h"

unsigned int Convert_to_Decimal(char Arr[],int len);

int main()
{
    char String[10];
    int Lenght=0;
    unsigned int Decimal=0;

    printf("Enter the String : ");
    scanf("%s",String);
    Lenght=strlen(String);

    Decimal = Convert_to_Decimal(String,Lenght);
    printf("%i",Decimal);
    return 0;
}

unsigned int Convert_to_Decimal(char Arr[],int len)
{
    unsigned int Dec=0;

    for(int i=0 ; i<len ; i++)
    {
        Dec= (Dec * 10) + (Arr[i]-'0');
    }
    return(Dec);
}
