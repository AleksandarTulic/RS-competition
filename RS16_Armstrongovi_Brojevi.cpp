#include <iostream>
#include <vector>
 
using namespace std;
 
int broj_cifara(int n)
{
    int br=0;
    while (n!=0)
    {
        n/=10;
        br++;
    }
 
    return br;
}
 
bool arm(int n)
{
    int suma=0,b=n;
    int br=broj_cifara(n);
 
    while (n!=0)
    {
        int a=n%10;
        n/=10;
        int p=1;
        for (int i=0;i<br;i++) p*=a;
        suma+=p;
    }
 
    if (b==suma) return true;
    else return false;
}
 
int main()
{
    int a,b;
    cin>>a>>b;
 
    for (int i=a;i<=b;i++)
        if (arm(i)) cout<<i<<endl;
    return 0;
}
