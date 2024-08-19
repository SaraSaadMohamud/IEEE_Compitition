#include <stdio.h>
#include <stdlib.h>

void Reverse_Function(int Arr[],int len,int Size);
void Print_Array(int Array[],int Len);

int main()
{
    int Index=0;

    printf("Enter the index : ");
    scanf("%i",&Index);

    int Array[Index];
    int Size=Index-1;

    for(int i=0 ; i<Index ; i++)
    {
        scanf("%i",&Array[i]);
    }

    Print_Array(Array,Index);
    Reverse_Function(Array,Index,Size);
    Print_Array(Array,Index);

    return 0;
}
void Reverse_Function(int Arr[],int len,int Size)
{
    int Temp;

    for(int i=0 ; i<len/2 ; i++)
    {
        Temp = Arr[i];
        Arr[i] = Arr[Size];
        Arr[Size] = Temp;
        Size--;
    }
}
void Print_Array(int Array[],int Len)
{
    for(int i=0 ; i<Len ; i++)
    {
        printf("%i\t",Array[i]);
    }
    printf("\n");
}
