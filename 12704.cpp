#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i=2;
    cin>>t;
    double a,b,c;
    while(cin>>a>>b>>c)
    {
        double r,d,e;
        r=a*a+b*b;
         r= (double)  sqrt(r);
         d=c-r;
         e=c+r;
        printf("%.2lf %.2lf\n",d,e);
    }
    return 0;
}
