#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int position(string g)
{
    for (int i=0;i<g.size();i++)
        if ( g[i] == '=' ) return i;
}
 
int broj(char r) { return r-'0'; }
 
int slovo(char r) { return r-'A'; }
 
int main()
{
    int n;
    cin>>n;
 
    while (n--)
    {
        string g;
        cin>>g;
 
        int niz1[26] = {0};
        int niz2[26] = {0};
 
        vector <string> p1,p2;
        int poz=position(g);
 
        string t="";
        for (int i=0;i<poz;i++)
        {
            if ( g[i] == '+' )
            {
                p1.push_back(t);
                t="";
            }
            else t+=g[i];
        }
        p1.push_back(t);
        t="";
        for (int i=poz+1;i<g.size();i++)
        {
            if ( g[i] == '+' )
            {
                p2.push_back(t);
                t="";
            }
            else t+=g[i];
        }
        p2.push_back(t);
 
        /* OVO JE BITNO */
 
        for (int i=0;i<p1.size();i++)
        {
            int p=1;
            if ( isdigit(p1[i][0]) ) p=broj(p1[i][0]);
 
            for (int j=0;j<p1[i].size();j++)
            {
                if ( isalpha(p1[i][j]) )
                    if ( isdigit(p1[i][j+1]) ) niz1[slovo(p1[i][j])]+=p*broj(p1[i][j+1]);
                    else niz1[slovo(p1[i][j])]+=p;
            }
        }
 
        for (int i=0;i<p2.size();i++)
        {
            int p=1;
            if ( isdigit(p2[i][0]) ) p=broj(p2[i][0]);
 
            for (int j=0;j<p2[i].size();j++)
            {
                if ( isalpha(p2[i][j]) )
                    if ( isdigit(p2[i][j+1]) ) niz2[slovo(p2[i][j])]+=p*broj(p2[i][j+1]);
                    else niz2[slovo(p2[i][j])]+=p;
            }
        }
 
        bool flag=false;
        for (int i=0;i<26;i++)
            if ( niz1[i] != niz2[i] ) {flag=true;break;}
 
        if (flag) cout<<"nije uravnotezena"<<endl;
        else cout<<"uravnotezene"<<endl;
    }
    return 0;
}
