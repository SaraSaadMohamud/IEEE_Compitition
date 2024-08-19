#include <stdio.h>
#include <stdlib.h>

int Check_FUnction(int Num);

int main()
{
    int Number=0;
    int Result=0;

    printf("Enter the Number : ");
    scanf("%i",&Number);

    Result=Check_FUnction(Number);
    if(Result == 0)
    {
        printf("The Number(%i) is Powered by 3 \n",Number);
    }
    else
    {
        printf("The Number(%i) is not  Powered by 3 \n",Number);
    }
    return 0;
}
int Check_FUnction(int Num)
{
    int Flag=0;
    for(int i=Num ; i>1 ; i/=3)
    {
        if (i%3 != 0)
        {
            Flag=1 ;
            break;
        }
    }
    return(Flag);
}
