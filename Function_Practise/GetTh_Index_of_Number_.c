#include <stdio.h>
#include <stdlib.h>

int Get_Binary(char Arr[],int Num,int Ind);
void Print_Array(char Array[],int Len);
char Array[32];

int main()
{
    int Number ;
    int Index=0;

    printf("Enter the Number : ");
    scanf("%i",&Number);

    Index=Get_Binary(Array,Number,0);
    Print_Array(Array,Index);
    printf("%i\n",Array[3]);

    return 0;
}

int Get_Binary(char Arr[],int Num,int Ind)
{
    for(int i= Num ; i>0 ; i/=2)
    {
        Arr[Ind] = (i%2);
        Ind++;
    }

    return(Ind);
}

void Print_Array(char Array[],int Len)
{
    int i=0;
    for(i=0 ; i<Len ; i++)
    {
        printf("%i\t",Array[i]);
    }
    printf("\n");
}
