#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
 
    int niz1[10]={0};
    int niz2[10]={0};
 
    for (int i=0;i<a.size();i++)
    {
        int e=a[i]-'0';
 
        niz1[e]++;
    }
 
    for (int i=0;i<b.size();i++)
    {
        int e=b[i]-'0';
 
        niz2[e]++;
    }
 
    int br=0;
    for (int i=0;i<10;i++)
        if ( niz1[i] != 0 && niz2[i] != 0) br+=min(niz1[i],niz2[i]);
 
    cout<<a.size()-br<<endl;
    return 0;
}
