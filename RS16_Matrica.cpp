#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int r,k;
    cin>>r>>k;
 
    int m[r][k];
    for (int i=0;i<r;i++)
        for (int j=0;j<k;j++)
            cin>>m[i][j];
 
    vector <int> broj;
 
    for (int i=0;i<r;i++)
    {
        int nm=m[i][0];
 
        for (int j=1;j<k;j++) nm=min(nm,m[i][j]);
 
        broj.push_back(nm);
    }
 
    int nv=broj[0];
    for (int i=1;i<broj.size();i++) nv=max(nv,broj[i]);
 
    cout<<"Trazeni broj je: "<<nv<<",nalazi se u:\n";
    for (int i=0;i<r;i++)
        for (int j=0;j<k;j++)
            if (nv==m[i][j] && broj[i]==nv) cout<<"u "<<i+1<<" redu i "<<j+1<<" koloni"<<endl;
    return 0;
}
