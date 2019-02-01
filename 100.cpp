#include<bits/stdc++.h>

using namespace std;

 int  f( int n);
 int s=0;
int  main()
{
       int i ,j;
   while( cin>>i>>j)
   {
       int x,y;
       if(i>j){
        x=j;
        y=i;
       }
       else
       {
           x=i;
           y=j;
       }

  int k,t=0 ,n,max=0;
    for(k=x;k<=y;k++)
    {
        n=k;
       t=f(n);
       if(t>max)
       {
           max=t;
       }

    }
    printf("%d %d %d\n",i,j,max);
   }
    return 0;
}

 int  f( int n)
{
    int h=0;

    if(n==1)
    {
        s++;
        h=s;
        s=0;
        return h;

    }
    else  if(n%2==0)
    {
        s++;
        return f(n/2);

    }
    else if(n%2!=0)
    {
        s++;
        return f(3*n+1);
    }
    return 0;
}

