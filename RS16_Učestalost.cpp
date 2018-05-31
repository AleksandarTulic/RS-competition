#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

int main()
{
    char sl[22] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'T', 'U', 'V', 'Z'  };
    vector <int> niz(22,0);
 
    string rijec;
    cin>>rijec;
 
    while ( isdigit(rijec[0]) == false )
    {
        for (int i=0;i<rijec.size();i++)
            for (int j=0;j<22;j++)
                if ( rijec[i] == sl[j] ) {niz[j]++;cout<<rijec[i]<<endl;}
        cin>>rijec;
    }
 
    int maks=0;
    for (int i=0;i<22;i++) maks=max(maks,niz[i]);
 
    char m[maks][22];
    for (int i=0;i<maks;i++)
        for (int j=0;j<22;j++)
        m[i][j] = ' ';
 
    for (int i=0;i<22;i++)
        for (int j=1;j<=niz[i];j++)
            m[maks-j][i]='*';
 
    for (int i=0;i<maks;i++)
    {
        for (int j=0;j<22;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
    for (int i=0;i<22;i++) cout<<sl[i]<<" ";
    return 0;
}
