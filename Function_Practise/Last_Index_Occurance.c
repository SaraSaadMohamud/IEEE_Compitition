#include <stdio.h>
#include <stdlib.h>

void Get_Index(int Array[],int Lenght , int Search, int *ptr);

int main()
{
   int Index;
   int position=-1;
   int Search_Value;

   printf("Enter the Index : ");
   scanf("%i",&Index);

   int Array[Index];
   int Count=0;

   for(Count=0 ; Count<Index ; Count++)
   {
       scanf("%i",&Array[Count]);
   }

   printf("Enter the Search_ Value : ");
   scanf("%i",&Search_Value);

   Get_Index(Array,Index-1,Search_Value,&position);
   printf("Result = %i\n",position);

   return 0;
}
void Get_Index(int Array[],int Lenght , int Search, int *ptr)
{
    int i=0;

    for(i=Lenght ; i>=0 ; i--)
    {
        if(Array[i]==Search)
        {
            *ptr=i;
            break;
        }
    }
}
