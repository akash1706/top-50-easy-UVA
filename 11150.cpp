#include<bits/stdc++.h>

using namespace std;

int f(int n)
{
    int  s=0;
     s=n;
   while(n>=3)
  {
    s=s+(n/3);
    n=(n/3)+(n%3);
   }
    if(n==2)
    {
    s++;
     }

    return s;
}

int main()
{
    int n;
    while(cin>>n)
    {
       int p=f(n);
       cout<<p<<endl;
    }
    return 0;
}
