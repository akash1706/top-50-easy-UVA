#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n=1,c,d;
    float cf;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&c,&d);
        cf=(float)c+((float)d*5.0)/9.0;
        printf("Case %d: %0.2f\n",n++,cf);
    }
    return 0;
}
