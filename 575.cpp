#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,j,d,sum;
    int i,c;
    char s[100];
    while(cin>>s)
    {
      sum=0,c=1;
      n=strlen(s);
      for(i=n-1;i>=0;i--)
      {

          d=s[i]-'0';
          j=d*(pow(2,c)-1);
          sum=sum+j;
          c++;
      }
    if(sum==0) return 0;
        cout<<sum<<endl;
    }
}
