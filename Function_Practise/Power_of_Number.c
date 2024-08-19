#include <stdio.h>
#include <stdlib.h>
void Get_Power(int Base_1,int Power_1,int *Res);
int main()
{
    int Base=0;
    int Power=0;
    int Result=1;
    printf("Enter the Base : ");
    scanf("%i",&Base);

    printf("Enter the Power : ");
    scanf("%i",&Power);

    Get_Power(Base,Power,&Result);
    printf("The Result of (%i) ^(%i) is = (%i) \n",Base,Power,Result);

    return 0;
}
void Get_Power(int Base_1,int Power_1,int *Res)
{
    *Res *= Base_1;

    if(Power_1 > 1)
    {
       Get_Power(Base_1,--Power_1,Res);
    }

}
