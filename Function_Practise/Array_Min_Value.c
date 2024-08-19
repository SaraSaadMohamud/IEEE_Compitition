#include <stdio.h>
#include <stdlib.h>
#include "string.h"

// function to get the minummum value of the Array
int Get_Min_Value(int Arr[],int Size);
int main()
{
   int Index=0;

   printf("Enter the Size of the Array : ");
   scanf("%i",&Index);
   int Array[Index];
   int i=0;
   int Min=0;

   for(i=0 ; i<Index ; i++)
   {
       scanf("%i",&Array[i]);
   }

   Min = Get_Min_Value(Array,Index);
   printf("The Minummum value at the Array is = %i",Min);

}
int Get_Min_Value(int Arr[],int Size)
{
    int Minumum = 0;
    for(int i=0 ; i<Size ; i++)
    {
        if(Arr[i] < Minumum)
        {
            Minumum = Arr[i];
        }
    }
    return(Minumum);
}
