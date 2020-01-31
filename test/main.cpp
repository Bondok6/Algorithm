#include <iostream>

using namespace std;
void Swap(int*a,int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int a[],int n)
{
    int i,j,Min;
    for(i=0;i<n-1;i++){
        Min = i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[Min])
                Min = j;
        Swap(&a[i],&a[Min]);
    }
}
void bubble_sort(int a[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
            if(a[j+1]<a[j])
                Swap(&a[j+1],&a[j]);
    }
}
void insertion_sort(int*a, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int temp = a[i];
        j = i;
        while(j>0 && temp<a[j-1])
        {
            a[j] = a[j-1];
            j=j-1;
        }
        a[j]=temp;
    }

}
int partion_index(int* a,int Start,int End)
{
    int pivot = a[End];
    int partIndex = Start;

    int i;
    for(i=Start; i<End;i++)
    {
        if(a[i]<=pivot)
        {
            Swap(&a[i],&a[partIndex]);
            partIndex++;
        }
    }
    Swap(&a[End],&a[partIndex]);

return partIndex;
}
void quick_sort(int* a,int Start, int End)
{
    if(Start<End)
    {
        int partIndex =partion_index(a,Start,End);
        quick_sort(a,Start,partIndex-1);
        quick_sort(a,partIndex+1,End);
    }
}
int sequential_search(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x){
            return i;
        }
    }

    return -1;
}


int main()
{
 /*   int n =7;
    int a[n]={9,5,1,4,3,7,6};
    int result = sequential_search(a,n,8);
    if(result == -1)
        cout<<"NOT Fount"<<endl;
    cout<<"index = "<<result<<endl;
    int k;
   // for(k=0;k<n;k++)
    //    cout<<a[k]<<endl;
*/

int m=8 , n=3;
char a[m]="kir olous";
char b[n]="olo";
int i;
for(i=0;i<=(m-n);i++)
{
    int j=0;
    while(j<n && a[i+j]==b[j])
        j++;
    if(j==n)
        cout<<"Found at index >> "<<i<<endl;
}
    return 0;
}
