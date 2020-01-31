//N-Queen problem
//order N^2
//backtracking algorithm
#include <iostream>
#include<stdlib.h>  // abs()

using namespace std;
int a[30]; int Count=0;                                                   
void print_sol(int n);
void queen(int n);

int main()
{
    int num;
    cout<<"Enter the number of Queen >> ";
    cin>>num;
    queen(num);
    cout<<"\n Total Solution = "<<Count;
    return 0;
}
int place(int pos)
{
    int i;
    for(i=1;i<pos;i++)            
    {
        if((a[i]==a[pos])||(abs(a[i]-a[pos])==abs(i-pos)))
            return 0;
    }   
    return 1;
}
void print_sol(int n)
{
    int i,j;
    Count++;  //solution 1 ,....
    cout<<"\n\nSolution "<<Count<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]==j)
                cout<<"Q\t";
            else
                cout<<"*\t";
        }
        cout<<"\n"<<endl;
    }
}
void queen(int n)
{
    int k=1;        //queen 1
    a[k]=0;         //queen 1 val 0
    while(k!=0)
    {
        do{
            a[k]++;  //queen vla
        }while(a[k]<=n && !place(k));

        if(a[k]<=n)
        {
            if(k == n)
                print_sol(n);
            else
            {
                k++;
                a[k]=0;
            }
        }
        else
            k--;
    }
}
