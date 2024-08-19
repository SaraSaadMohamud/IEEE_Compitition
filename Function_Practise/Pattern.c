#include <stdio.h>
#include <stdlib.h>
// Function to make the pattern of Numbers
void Get_Pattern(int Num);
int main()
{
   int Number ;
   printf("Enter the Number : ");
   scanf("%i",&Number);
   Get_Pattern(Number);
    return 0;
}
void Get_Pattern(int Num)
{
    int Count1=0;
    int Count2=0;
    for(Count1 =0 ; Count1<Num ; Count1++)
    {
        for(Count2=Count1 ; Count2<Num ; Count2++)
        {
            printf("%i ",Count2);
        }
        printf("\n");
    }
}
