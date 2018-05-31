#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int g1,g2;
    cin>>g1>>g2;
 
    vector <int> niz;
    for (int i=0;i<n;i++)
    {
        int a;
        cin>>a;
 
        if (a>g1 && a<g2) niz.push_back(a);
    }
 
    if (niz.empty()) cout<<"Nema elemenata."<<endl;
    else
    {
        sort(niz.begin(),niz.begin()+niz.size());
 
        cout<<"Najmanji element: "<<niz[0]<<endl;
        cout<<"Najveci element: "<<niz[niz.size()-1]<<endl;
    }
    return 0;
}
