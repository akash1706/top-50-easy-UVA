#include<bits/stdc++.h>

using namespace std ;

int f(long long int n)
{
    int p=n;
    int a=0,c;
    while(n!=0)
    {
       c=n%10;
        n=n/10;
        a=a*10+c;
    }
    if(p==a)
    {
        int s=0;
        for(int i=2;i<p;i++)
        {
            if(p%i==0)
                s++;
        }
        if(s==0)
        {
           return 1;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return 1;
    }

}

int main()
{
  long long  int n;
    while(cin>>n)
        {
           if(n<=9)    cout<<2*n<<endl;
           else
        {
          cout<<2*n<<endl;
          if(f(n)==-1)
         break;
        }
        }
        return 0;
}
