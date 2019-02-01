#include<bits/stdc++.h>

using namespace std;

int main()
{
   long int n,i,j;
   int a[100];
    while(cin>>n)
    {
        i=0;
        if(n<=-1) return 0;
        else if(n==0) printf("0");
        while(n!=0)
        {
            a[i]=n%3;
            n=n/3;
            i++;
        }

        for(j=i-1;j>=0;j--)
        {
            cout<<a[j];
        }
        printf("\n");
    }
}
