#include <iostream>
int gcd(int n , int m) // Euclid's algorithm
{                      //O(logn)
    int r ;
    while(n!=0)
    {
       r =  m%n;
       m = n;
       n = r;
    }
    return m;
}
int GCD(int a , int b) //middle school algorithm
{                      //O(sqrt(n))
    int c,i, ans=1, m=0,n=0,k=0;
    c = a >= b ? b:a;
    for(i=2;i<=c;i++)
    {
        n=0;
        m=0;
        if(a%i == 0)
        {
            n=1;
            a= a/i;

        }
        if(b%i == 0)
        {
            m=1;
            b= b/i;

        }
        if(n==1 && m==1)
        {
            ans = ans*i;
        }
        if(n==1 || m==1)
        {
            i--;
        }
    }
    return ans ;
}

using namespace std;

int main()
{
    int n,m;
    cout<<"enter first number >> ";
    cin>>n;
    cout<<"enter second number >> ";
    cin>>m;

    cout<<"Greatest common divide \"Euclid's algorithm\" >> "<<gcd(n,m)<<endl;
    cout<<"Greatest common divide \"middle school algorithm\" >> "<<GCD(n,m);


    return 0;
}
