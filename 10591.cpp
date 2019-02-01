#include<bits/stdc++.h>

using namespace std;
long long int f(long long int n)
{
   long long int d,a,s=0;
    d=n;

    while(d!=0)
    {
        a=d%10;
        d=d/10;
        s=s+a*a;
    }
    n=s;
    if(n<=9)
    {
        return n;
    }
    else
    {
        f(n);
    }

}

int main()
{
   long long int t,n,x,i=1;
    cin>>t;
    while(cin>>n)
    {
        x=f(n);
        if(x==1||x==7)
        {
            printf("Case #%lld: %lld is a Happy number.\n",i,n);
        }
        else
        {
            printf("Case #%lld: %lld is an Unhappy number.\n",i,n);
        }
      i++;
    }
    return 0;
}
