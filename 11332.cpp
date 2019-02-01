#include<bits/stdc++.h>

using namespace std;

long long int f(long long int n)
{
    long long int s=0,d;
    while(n !=0)
    {
       d=n%10;
       s=s+d;
        n=n/10;
    }
   n=s;
    if(n<10) return  n;
    else
        return f(n);
}

int main()
{
    long long int n,a;
    while(cin>>n)
    {
        if(n<=0) return 0;
        a=f(n);
    cout<<a<<endl;
    }
    return 0;
}
