#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t,i,c=0;
    char s[100];
    cin>>t;
    getchar();
    while(c<t)
    {
        int p=0;
     cin.getline(s,sizeof(s));
        c++;

      for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
        p++;
        else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')  p=p+2;
        else if(s[i]=='s'||s[i]=='z') p=p+4;
        else  p=p+3;
        }
        printf("Case #%d: %d\n",c,p);
      }
      //puts(s);
      //cin.getline(s,sizeof(s));
     // cout<<s<<endl;
      return 0;
    }


