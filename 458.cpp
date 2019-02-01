#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[5000];
    while(cin>>s)
        {
            int l,i;
            l=strlen(s);
            for(i=0;i<l;i++)
       printf("%c",s[i]-7);
       printf("\n");
        }
    return 0;
}
