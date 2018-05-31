#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
 
    if (n%12==0) cout<<n/12<<endl;
    else cout<<n/12+1<<endl;
    return 0;
}
