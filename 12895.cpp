#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    while (tc--)
    {
        char s[15];
        gets(s);
        int b,l=strlen(s);
        long long int n,a;
        n=a=0;
        for (int i=0;i<l;i++)
        {
            b=s[i]-'0';
            a+=pow(b,l);
            n=n*10+b;
        }
        if (a==n) printf("Armstrong\n");
        else printf("Not Armstrong\n");
    }
    return 0;
}
