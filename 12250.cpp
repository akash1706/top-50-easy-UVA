#include<bits/stdc++.h>

using namespace std;
int i=1;
int main()
{
    char s[80];
    while(cin>>s)
    {
        if(strcmp(s,"#")==0)
        {
            break;
        }

    else if(strcmp(s,"HELLO")==0)
     {
         printf("Case %d: ENGLISH\n",i);
         i++;
     }
     else if(strcmp(s,"HOLA")==0)
     {
         printf("Case %d: SPANISH\n",i);
         i++;
     }
     else if(strcmp(s,"HALLO")==0)
     {
         printf("Case %d: GERMAN\n",i);
         i++;
     }
     else if(strcmp(s,"BONJOUR")==0)
     {
         printf("Case %d: FRENCH\n",i);
         i++;
     }
     else if(strcmp(s,"CIAO")==0)
     {
         printf("Case %d: ITALIAN\n",i);
         i++;
     }
     else if(strcmp(s,"ZDRAVSTVUJTE")==0)
     {
         printf("Case %d: RUSSIAN\n",i);
         i++;
     }
    else{
         printf("Case %d: UNKNOWN\n",i);
         i++;
    }

    }
    return 0;
}
