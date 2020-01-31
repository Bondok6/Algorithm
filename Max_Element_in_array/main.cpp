/*
    Get max number in an array
    order N
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter Size >> "; cin >> n;
    int arr[n],m;
    for(m=0;m<n;m++)
    {
        cout<<"enter element["<<m+1<<"] >> ";
        cin>>arr[m];
        cout<<endl;
    }

    int i,Max=0;

    for(i=0;i<n;i++)
    {
        if(arr[i] >= Max)
            Max = arr[i];
    }
    cout<<"The maximun number is >> "<<Max<<endl;

    return 0;
}
