#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if((a==1&&b==0&&c==0)||(a==0&&b==1&&c==1))
        {
            cout<<"A"<<endl;
        }
      else  if((a==0&&b==1&&c==0)||(a==1&&b==0&&c==1))
        {
            cout<<"B"<<endl;
        }
         else  if((a==0&&b==0&&c==1)||(a==1&&b==1&&c==0))
        {
            cout<<"C"<<endl;
        }
        else
        {
            cout<<"*"<<endl;
        }
    }
}
