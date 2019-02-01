#include<bits/stdc++.h>

using namespace std;
long long int s=0,p;

long long int  f(long long int a,long long int b)
{

    if(a<=b)
    {
        if(a==1)
        {
            s++;
            p=s;
            s=0;
            return p;
        }
        else if(a%2==0){
                    s++;
            return f(a/2,b);

        }
        else{
                  s++;
            return f((3*a+1),b);

        }
    }
    else
    {

        p=s;
        s=0;
        return p;
    }
}

int main()
{
    long long int a,b;
    int c=1;
    while(cin>>a>>b)
    {
        if(a<0||b<0) return 0;
       printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",c++,a,b,f(a,b));
    }
}
