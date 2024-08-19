#include <stdio.h>
#include <stdlib.h>
int Get_Factorial(int Num);
int main()
{
    int Number ;
    int fact=0;

    printf("Enter the Number : ");
    scanf("%i",&Number);
    fact=Get_Factorial(Number);
    if(Number >= 0)
    {
        printf("The Factorial of (%i) is = %i",Number,fact);
    }
    return 0;
}
int Get_Factorial(int Num)
{
    if(Num < 0)
    {
        printf("Error!!,(%i)you can't get factorial for Negative number !\n",Num);
        exit(0);
    }
    else if(Num == 0)
    {
        return(1);
    }
    else
    {
        return(Num * Get_Factorial(Num-1));
    }

}
