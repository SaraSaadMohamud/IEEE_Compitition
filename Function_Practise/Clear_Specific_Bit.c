#include <stdio.h>
#include <stdlib.h>
int Clear_Function(int Num,int Position);
int main()
{
    int Number=0;
    int Bit_Position=0;
    int Result;

    printf("Enter the Number : ");
    scanf("%i",&Number);

    printf("Enter the Bit You Want To Clear it : ");
    scanf("%i",&Bit_Position);

    Result = Clear_Function(Number,Bit_Position);
    printf("%i\n",Result);
    return 0;
}
int Clear_Function(int Num,int Position)
{
    Num &= ~(1<<Position);
    return(Num);
}
