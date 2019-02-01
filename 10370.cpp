#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    while(c<t)
    {
        int n,i ;

        cin>>n;
       int a[n];
      int total=0;
        for(i=0;i<n;i++)
        {
            cin>> a[i];
            total=total+a[i];
        }
        double av=(double)total/(double)n;

        int j=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>av)
                j++;
        }
       double b=((double)j/(double )n)*100.0;

       printf("%.3lf%%\n",b);
       c++;

    }

    return 0;
}
