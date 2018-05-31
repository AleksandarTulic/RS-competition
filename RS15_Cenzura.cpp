#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int n;
string rij[101];
string g;
 
bool check(string a)
{
    for (int i=0;i<n;i++)
        if ( a == rij[i] ) return true;
    return false;
}
 
int main()
{
    cin>>n;
    for (int i=0;i<n;i++) cin>>rij[i];
 
    getline(cin,g,'\n');
    getline(cin,g,'\n');
 
    string t="";
 
    for (int i=0;i<g.size();i++)
    {
        if ( g[i] == ' ' )
        {
            string h="";
            for (int j=0;j<t.size();j++)
                if ( isalpha(t[j]) ) h+=t[j];
 
            if ( check(h) )
                for (int j=0;j<h.size();j++) cout<<"*";
            else cout<<t;
            if ( h.size() != t.size() && check(h) ) cout<<t[t.size()-1]<<" ";
            else cout<<" ";
            t="";
        }
        else t+=g[i];
    }
 
    string h="";
    for (int j=0;j<t.size();j++)
        if ( isalpha(t[j]) ) h+=t[j];
 
    if ( check(h) )
       for (int j=0;j<h.size();j++) cout<<"*";
    else cout<<t;
    if ( h.size() != t.size() && check(h) ) cout<<t[t.size()-1]<<" ";
    else cout<<" ";
    return 0;
}
