#include <bits/stdc++.h>

using namespace std;
int max(int a, int b){
     return (a > b)? a : b;

}
int knapSack(int W, int wt[], int val[], int n)
{
if (n == 0 || W == 0)
    return 0;
if (wt[n-1] > W)
    return knapSack(W, wt, val, n-1);
else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                    knapSack(W, wt, val, n-1) );
}
int main()
{
    int n,i;
    cout<<"enter size >>"; cin>>n;
    int val[n];
    cout<<"enter val >> ";
    for(i=0;i<n;i++)
    {
        cin>>val[i];
    }


    int k,s;
    cout<<"enter size of weight >> ";
    cin>>s;
    int wt[s];
    for(k=0;k<s;k++){
        cin>>wt[k];
    }
    int W;
    cout<<"enter the weight of bag >> ";
    cin>>W;


    cout<<"knapSack equal >>"<<knapSack(W, wt, val, n);
    return 0;
}
