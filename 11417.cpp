#include<bits/stdc++.h>

using namespace std;
int gcd(int i,int j)
{
    int a;

        while(i!=0)
        {
            a=j%i;
            j=i;
             i=a;
            }
    return j;

}

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) return 0;
        int g=0,i,j;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                g=g+gcd(i,j);
            }
        }
        cout<<g<<endl;
    }
    return 0;
}
