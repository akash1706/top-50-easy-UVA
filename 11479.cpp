#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,f=0;
    cin>>t;
    long long int a,b,c;
    while(f<t)
    {
        f++;
        cin>>a>>b>>c;
        if((a+b)<=c||(a+c)<=b||(b+c)<=a)
        {
            printf("Case %d: Invalid\n",f);
        }
         else if (a<=0||b<=0||c<=0)
            {
            printf("Case %d: Invalid\n",f);
        }
        else  if(a==b&&b==c)
        {
            printf("Case %d: Equilateral\n",f);
        }
        else if(a==b||a==c||b==c)
        {
            printf("Case %d: Isosceles\n",f);
        }
        else
        {
           printf("Case %d: Scalene\n",f);
        }

    }
    return 0;

}
