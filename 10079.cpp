#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long int n,s,i;
    while(cin>>n)
    {s=0;
        if(n<0) return 0;

        for(i=0;i<=n;i++)
        {
            if(i==0) s=s+1;

            else
            {
                s=s+i;
            }
        }
        cout<<s<<endl;
    }
}
