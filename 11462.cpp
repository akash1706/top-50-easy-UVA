#include<bits/stdc++.h>

using namespace std;

int main()
{
   long int n,i;
    while(cin>>n)
    {
         long int a[n];
         if(n==0) return 0;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            cout<<a[i];
            if(i<n-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
