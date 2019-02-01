#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[20];
    int t,c=0,v;
     int sum=0;
   cin>>t;
   while(c<t)
   {

      cin>>s;
       if(strcmp(s,"donate")==0)
       {
          cin>>v;
           sum=sum+v;
       }
       else
       {
          cout<<sum<<endl;
       }
       c++;
   }
}
