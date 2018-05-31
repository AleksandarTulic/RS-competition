#include <iostream>
#include <vector>
 
using namespace std;
 
#define pb push_back
 
int main()
{
    int n;
    cin>>n;
 
    int A[n];
    for (int i=0;i<n;i++) cin>>A[i];
 
    int a=A[0];
    vector <int> veci,manji;
 
    for (int i=1;i<n;i++)
        if (a>A[i]) manji.pb(A[i]);
        else veci.pb(A[i]);
 
    for (int i=0;i<manji.size();i++) cout<<manji[i]<<" ";
    cout<<a<<" ";
    for (int i=0;i<veci.size();i++) cout<<veci[i]<<" ";
    return 0;
}
