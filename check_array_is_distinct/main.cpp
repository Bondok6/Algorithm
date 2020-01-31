/*
    Check if array is distinct
    order N^2
*/

#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter Size >> "; cin>>n;
    int arr[n],m;
    for(m=0;m<n;m++)
    {
        cout<<"enter element["<<m+1<<"] >> ";
        cin>>arr[m];
        cout<<endl;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"IS DISTICT";
                break;
            }

        }

    }
    return 0;
}
