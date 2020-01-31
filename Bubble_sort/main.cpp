/*
    Bubble Sort
    order N^2
    intelligence (if array already sorted don't need to continue)
    Not Blind
    in place
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter Size >> "; cin>>n;
    int a[n],m;
    for(m=0;m<n;m++)
    {
        cout<<"enter element["<<m+1<<"] >> ";
        cin>>a[m];
        cout<<endl;
    }

    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int k;
    for(k=0;k<n;k++){
        cout<<"element["<<k+1<<"] >> "<<a[k]<<endl;
    }

    return 0;
}
