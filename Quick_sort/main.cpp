/*
    Quick Sort
    order"Theta" n log(n)
    if(already or reversed sorted) order"worst" N^2
    in place
*/
#include <iostream>
using namespace std;

void Swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int* a,int Start,int End)
{
    int pivot = a[End];
    int partitionIndex = Start;

    int i;
    for(i=Start;i<End;i++)
    {
        if(a[i]<=pivot)
        {
            Swap(&a[i],&a[partitionIndex]);
            partitionIndex++;
        }
    }
    Swap(&a[partitionIndex],&a[End]);
    return partitionIndex;
}
void quickSort(int* a, int Start, int End)
{
    if(Start < End)
    {
       int partitionIndex = Partition(a,Start,End);
       quickSort(a,Start,partitionIndex-1);
       quickSort(a,partitionIndex+1,End);
    }

}
int main()
{
   int a[] ={7,5,6,4,1,0,2,3};
   quickSort(a,0,7);
   int i;
   for(i=0;i<8;i++)
   {
       cout<<"element["<<i+1<<"] >> "<<a[i]<<endl;
   }

    return 0;
}
