#include <iostream>
using namespace std;

int main(void)
{
    int arr[6]={10,20,30,40,50,60};
    int i;
    int k = 90;
    for(i=0; i<6;i++){
        if(arr[i]==k){
            int flag = 0;
            cout<<"Found in index >>"<<i<<endl;
            flag=1;
            if(flag!=0)
                cout<<"NOT FOUND"<<endl;

            break;
        }
            }


	return 0;
}
