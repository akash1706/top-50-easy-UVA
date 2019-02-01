#include<bits/stdc++.h>

using namespace std;
int i=1;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(cin>>a>>b>>c)
    {
        if(a<=20&&b<=20&&c<=20)
        {
            printf("Case %d: good\n",i);
        }
        else
        {
            printf("Case %d: bad\n",i);
        }
        i++;
    }
    return 0;
}
