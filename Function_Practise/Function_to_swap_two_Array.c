#include <stdio.h>
#include <stdlib.h>

void Arrays_Swaping(int Arr1[],int Arr2[],int Len1,int Len2);
void Print_Array(int Arr[],int Index);
int main()
{
    int Index1;
    int Index2;

    printf("Enter the Index1 : ");
    scanf("%i",&Index1);

    printf("Enter the Index2 : ");
    scanf("%i",&Index2);

    int Array1[Index1+Index2];
    int Array2[Index2+Index1];

    printf("Enter the Element of First Array : \n");
    for(int i=0 ; i<Index1 ; i++)
    {
        scanf("%i",&Array1[i]);
    }

    printf("Enter the Element of Second Array : \n");
    for(int i=0 ; i<Index2 ; i++)
    {
        scanf("%i",&Array2[i]);
    }

    Print_Array(Array1,Index1);
    Print_Array(Array2,Index2);
    Arrays_Swaping(Array1,Array2,Index1,Index2);
    Print_Array(Array1,Index2);
    Print_Array(Array2,Index1);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
void Arrays_Swaping(int Arr1[],int Arr2[],int Len1,int Len2)
{
    int i=0;
    int j=0;
    int k=0;
    int Temp[Len1+Len2];

    for(i=0 ; i<Len1 ; i++)
    {
        Temp[i] = Arr1[i];
    }
    for(i=Len1 ; i<Len1+Len2 ; i++)
    {
        Temp[i]=0;
    }
    ///////////////////////////////////////////////
    for(j=0 ; j<Len2 ; j++)
    {
        Arr1[j]=Arr2[j];
    }
    for(j=Len2; j<Len1+Len2 ; j++)
    {
        Arr1[j]=0;
    }
    ////////////////////////////////////////////////
     for(k=0 ; k<Len1 ; k++)
    {
        Arr2[k]=Temp[k];
    }
    for(k=Len1; k<Len1+Len2 ; k++)
    {
        Arr2[k]=0;
    }
    //////////////////////////////////////////////////
}
///////////////////////////////////////////////////////////////////////////////////////////////
void Print_Array(int Arr[],int Index)
{
    for(int i=0 ; i<Index ; i++)
    {
        printf("%i\t",Arr[i]);
    }
    printf("\n");
}
