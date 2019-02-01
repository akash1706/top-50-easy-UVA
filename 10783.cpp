#include<bits/stdc++.h>

using namespace std;
int j=0;
int main()
{
    int t,a,b;
    cin>>t;
    while(cin>>a>>b){
        int x,y,i,s=0;
        if(a>b)
        {
            x=b;
            y=a;
        }
        else
        {
            x=a;
            y=b;
        }
        if(x%2==0)
        {
            x=x+1;
        }
        for(i=x;i<=y;i=i+2)
        {
            s=s+i;
        }
        j++;
        printf("Case %d: %d\n",j,s);

    }
    return 0;
}
