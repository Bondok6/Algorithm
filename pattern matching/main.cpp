/*
	O(m*n)=(N^2)
*/
#include<iostream>
using namespace std;


int main(){
	int m=5,n=3;

	char a[m]={'a','b','a','h','o'};
	char b[n]={'a','h','o'};
	int i;
	for(i=0;i<=(m-n);i++)
    {
		int j=0;
		while(j<n && a[i+j]==b[j]){
			j++;
		}

		if (j==n){
		cout<<i;
		}
	}
}
