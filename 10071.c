#include<stdio.h>

int main()
{
    int v,t;
    while(scanf("%d%d",&v,&t)!=EOF)
    {
        int n;
        n=2*(v*t);
        printf("%d\n",n);
    }
    return 0;
}
