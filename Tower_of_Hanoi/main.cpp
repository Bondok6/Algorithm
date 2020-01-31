/*
    Tower of hanoi
    order 2^n
*/
#include <iostream>
using namespace std;
void Move(int Count,int n1,int n3,int n2)
{
    if(Count>0)
    {
        Move(Count-1,n1,n2,n3);
        cout<<"Move Disk "<<Count<<" form "<<n1<<" to "<<n3<<endl;
        Move(Count-1,n2,n3,n1);
    }
}

int main()
{
    int num;
    cout<<"Enter the number of Disks >> ";
    cin>>num;
    Move(num,1,3,2);


    return 0;
}
