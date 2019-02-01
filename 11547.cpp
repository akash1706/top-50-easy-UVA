#include<iostream>

using namespace std;

int main()
{
   int t ,n;
   cin>>t;
   while(cin>>n)
   {
       n=n*567;
       n=n/9;
       n=n+7492;
       n=n*235;
       n=n/47;
       n=n-498;
       n=n/10;
       n=n%10;
       if(n<0) cout<<n*(-1)<<endl;
       else cout<<n<<endl;
   }
}

