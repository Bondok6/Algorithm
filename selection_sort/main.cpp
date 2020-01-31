/*
    Selection Sort
    order N^2
    in place
    brute force (Blind)
    easy for implementation
    useful if you want smallest or greatest element in array
*/

#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter size >> "; cin>>n;
    int a[n],m;
    for(m=0;m<n;m++)
    {
        cout<<"enter element ["<<m+1<<"] >>";
        cin>>a[m];
        cout<<endl;
    }

    int Min,i,j;

    for(i=0; i<n-1; i++)
    {
        Min = i;
        for(j=i+1; j<n; j++)
            if(a[j]<a[Min])
                Min = j;
        int temp = a[Min];
        a[Min] =a[i];
        a[i] = temp;

    }
    int k;
    for(k=0;k<n;k++){
        cout<<"element["<<k+1<<"] >> "<<a[k]<<endl;
    }

        return 0;
    }
