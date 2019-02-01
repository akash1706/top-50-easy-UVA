#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,s;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) return 0;
        s=0;
        for(i=1;i*i<=b;i++)
        {
           if((i*i)<=b&& (i*i)>=a) s++;
        }
        cout<<s<<endl;
    }
}
