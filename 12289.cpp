#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    char s[10];
    cin>>t;
    while(cin>>s)
    {
        if(strlen(s)==5) printf("3\n");
        else{
                int c=0;
            if(s[0]=='o') c++;
        else if(s[1]=='n') c++;
        else if (s[2]=='e') c++;
        if(c>=2) printf("1\n");
        else   printf("2\n");

        }
    }
    return 0;
}
