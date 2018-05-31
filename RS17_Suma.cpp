#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    vector <int> nep;
    unsigned long long par=0;
 
    for (int i=0;i<n;i++)
    {
        int a;
        cin>>a;
 
        if (a % 2 == 0) par+=a;
        else nep.push_back(a);
    }
 
    sort(nep.begin(),nep.begin()+nep.size());
 
    for (int i=nep.size()-1;i>=0;i-=2)
        if ( (nep.size()-1)>=(i-1) && (i-1)>=0 ) par+=nep[i]+nep[i-1];
 
    cout<<par<<endl;
    return 0;
}
