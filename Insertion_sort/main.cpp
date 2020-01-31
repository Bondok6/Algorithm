/*  insertion sort
    order of N^2
    better in linked list
*/

#include <iostream>
#define n 6
using namespace std;

int main()
{
    int arr[n]={5,9,4,7,8,1};
    int i;
    for(i=0;i<n;i++)
    {
        int temp = arr[i];
        int j = i;

        while(j>0 && temp<arr[j-1])
        {
            arr[j]=arr[j-1];
            j = j-1;
        }
        arr[j]=temp;
    }
    int k;
    for(k=0;k<n;k++)
        cout<<arr[k]<<endl;


        return 0;
}
