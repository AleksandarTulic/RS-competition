#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
#define usll unsigned long long
 
usll vr(string g)
{
    usll suma=0;
    usll p=1;
 
    for (int i=g.size()-1;i>=0;i--)
    {
        int a=g[i]-'0';
        suma+=a*p;
        p*=10;
    }
 
    return suma;
}
 
int main()
{
    string iz;
    cin>>iz;
 
    vector <int> ub;
 
    for (int i=0;i<iz.size();i++)
    {
        if (iz[i]=='-')
        {
            int br=0;
 
            for (int j=i+1;j<iz.size();j++)
                if (iz[j]=='+' || iz[j]=='-') break;
                else br++;
 
            if (br>=2) ub.push_back(i+2);
        }
    }
 
    for (int i=0;i<ub.size();i++) iz.insert(ub[i]+i,"+");
 
    usll suma=0;
    int pred=1;
    string g="";
 
    for (int i=0;i<iz.size();i++)
    {
        if (iz[i]!='+' && iz[i]!='-') g+=iz[i];
        else
        {
            usll a=vr(g);
 
            suma+=a*pred;
            g="";
 
            if (iz[i]=='+') pred=1;
            else pred=-1;
        }
    }
 
    suma+=vr(g)*pred;
    cout<<suma<<endl;
    return 0;
}
