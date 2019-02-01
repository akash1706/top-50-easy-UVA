#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[10];
    int i=1;
    while(cin>>s)
    {
        if(strcmp(s,"*")==0)
        {
            break;
        }
        else if(strcmp(s,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(strcmp(s,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }
}
