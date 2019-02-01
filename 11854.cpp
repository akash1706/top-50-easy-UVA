#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int x,y,z;
        if(a==0&&b==0&&c==0)break;
        if(a>b&&a>c)
        {
            x=b;
            y=c;
            z=a;
        }
        else if(b>a&&b>c)
        {
            x=a;
            y=c;
            z=b;
        }
        else
        {
            x=a;
            y=b;
            z=c;
        }
        if((x*x+y*y)==z*z)
        {
            cout<<"right"<<endl;
        }
        else
        {
            cout<<"wrong"<<endl;
        }
    }
}
