#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    while(c<t)
    {
        int n,i,max,min,s=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
           cin>>a[i];
        }
        max=a[0];
        min=a[0];
        for(i=0;i<n;i++)
        {
            if(max<a[i]) max=a[i];
            else if(min>a[i]) min =a[i];
        }

        s=2*(max-min);
        cout<<s<<endl;
        c++;
    }
    return 0;
}
