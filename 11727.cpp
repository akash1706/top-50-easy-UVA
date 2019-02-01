#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c,i=1;
    cin>>t;
    while(cin>>a>>b>>c)
    {
        if((a>b&&a<c)||(a>c&&a<b))
        {
            printf("Case %d: %d\n",i,a);
        }
       else if((b>a&&b<c)||(b>c&&b<a))
        {
            printf("Case %d: %d\n",i,b);
        }
        else {
             printf("Case %d: %d\n",i,c);
        }
        i++;
    }
    return 0;
}
