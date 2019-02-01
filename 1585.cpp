#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t>0)
    {
        char s[100];
        gets(s);
        int  d=0,p=1;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='O')
            {
            d=d+p;
            p++;
            }
            else
            {
                p=1;
                d=d+0;
            }

        }
        cout<<d<<endl;
        t--;
    }
}
