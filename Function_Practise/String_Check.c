#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Check_Function(char str1[],char str2[],int Len);

int main()
{
    char Name[10]= "sarasaad";
    char User_Input[10];
    int Lenght=0;
    int Result=0;

    printf("Enter Your Name : ");
    scanf("%s",User_Input);
    strlwr(User_Input);

    Lenght=strlen(User_Input);
    for(int i=Lenght ; i<10 ;i++)
    {
        User_Input[i]=0;
    }
    Result = Check_Function(Name,User_Input,10);
    if(Result == 1)
    {
        printf("The TWo Strings are the Same !\n");
    }
    else
    {
        printf("The two Strings are Different !\n");
    }
    return 0;
}
int Check_Function(char str1[],char str2[],int Len)
{
    int Flag=1;
    for(int i=0 ; i<Len ; i++)
    {
        if(str1[i] != str2[i])
        {
            Flag=0;
            break;
        }
    }
    return(Flag);
}
