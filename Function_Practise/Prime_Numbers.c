#include <stdio.h>
#include <stdlib.h>
void Get_Prim_Numbers(int Num1,int Num2);
int main()
{
    int Start=0;
    int End=0;

    printf("Enter the First Number : ");
    scanf("%i",&Start);

    printf("Enter the Last Number : ");
    scanf("%i",&End);

    Get_Prim_Numbers(Start,End);

    return 0;
}
void Get_Prim_Numbers(int Num1,int Num2)
{
    int i=0;
    int j=0;
    int flag=0;
    for( i=Num1 ; i<=Num2 ; i++)
    {
        flag=0;
        for( j=2 ; j<i ; j++)
        {
            if(i%j == 0)
            {
                flag=1;
                break;
            }
        }
        if(flag== 0)
        {
            printf("%i\t",i);
        }
    }
}
