#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int a,b,c,d;
    while(t>0){
        cin>>a>>b>>c>>d;
        if(a==b&&b==c&&c==d)
            cout<<"square"<<endl;
        else if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
        cout<<"rectangle"<<endl;
        else if((a+b+c)>d&&(a+b+d)>c&&(c+b+d)>a&&(a+c+d)>b)
            cout<<"quadrangle"<<endl;
        else
       cout<<"banana"<<endl;
       t--;
    }
    return 0;
}


