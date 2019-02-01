#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,s,h;
    while(cin>>a>>b)
    {
        if(a<0&&b<0)
        {
            break;
        }
        else if((a==99&&b==0)||(a==0&&b==99)) cout<<"1"<<endl;
        else if(a==b) cout<<"0"<<endl;
        else if(a>b)
        {
            s=a-b;
            h=(99-a)+(b-0)+1;
            if(s<h) cout<<s<<endl;
            else cout<<h<<endl;

        }
        else if(a<b)
        {
            s=b-a;
            h=(99-b)+(a-0)+1;
            if(s<h) cout<<s<<endl;
            else cout<<h<<endl;

        }

    }
    return 0;
}


