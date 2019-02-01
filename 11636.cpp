#include<bits/stdc++.h>

using namespace std;
int j=0;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n<0) break;
        int s=1,i=0;
        while(s<n)
        {
            s=s*2;
            i++;
        }
        j++;
        printf("Case %d: %d\n",j,i);
    }
}
