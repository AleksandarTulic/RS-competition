#include <iostream>
 
using namespace std;
 
int sizee(int n)
{
    int br=0;
 
    while (n!=0)
    {
        n/=10;
        br++;
    }
    return br;
}
 
bool magic(int n)
{
    while (n!=0)
    {
        if ( n % sizee(n) != 0 ) return false;
        n/=10;
    }
 
    return true;
}
 
int main()
{
    int n;
    cin>>n;
 
    if (magic(n)) cout<<"Broj je magican!"<<endl;
    else cout<<"Broj nije magican!"<<endl;
    return 0;
}
