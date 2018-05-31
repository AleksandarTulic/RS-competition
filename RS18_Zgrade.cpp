#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
 
    vector <int> ele;
 
    for (int i=0;i<n;i++)
    {
        vector <int>::iterator it;
        it = ele.begin();
        it = ele.insert(it+a[i],i+1);
    }
 
    for (int i=0;i<ele.size();i++) cout<<ele[i]<<" ";
    return 0;
}
