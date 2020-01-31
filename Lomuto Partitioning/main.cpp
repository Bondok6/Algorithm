#include<iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return arr[i + 1];
}


int main(){
	int arr[5]={12,9,7,15,10};
	int low=1, high=4;
	int s= partition( arr, low, high) ;


 cout<<"the p element is:" <<s;

}
