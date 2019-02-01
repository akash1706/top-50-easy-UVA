#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;
    while(cin>>n)
    {
        int s=0,a=0,b,c;
        if(n<=0) return 0;
    while(n!=0)
    {

        s=s+n/3;
        a=n%3;
        n=n/3;
           n=n+a;
           if(n==2)
           {

               s++;
               break;
           }
           else if(n==1)
           {
               break;
           }


    }

    cout<<s<<endl;


    }
    return 0;
}
