#include <iostream>
#include <cmath>
 
using namespace std;
 
#define mod 1000000007
unsigned long long suma=0;
 
bool mijenjati_da_ne(string g, int index, int poz)
{
    for (int i=index;i<poz;i++)
        if (g[i]==g[poz]) return false;
    return true;
}
 
void permutations(string g, int index, int n, int b3, int b4)
{
    if (index>=n)
    {
        unsigned long long suma1=1;
        unsigned long long suma2=1;
 
        for (int i=0;i<b3;i++) suma1=(suma1*5)%mod;
        for (int i=0;i<b4;i++) suma2=(suma2*21)%mod;
 
        suma1=suma1%mod;
        suma2=suma2%mod;
 
        suma=(suma+(suma1*suma2))%mod;
        return;
    }
 
    for (int i=index;i<n;i++)
    {
        if (mijenjati_da_ne(g,index,i))
        {
            swap(g[index],g[i]);
            permutations(g,index+1,n,b3,b4);
            swap(g[index],g[i]);
        }
    }
}
 
int main()
{
    int n,k;
    cin>>n>>k;
 
    string g;
    cin>>g;
 
    int b1=0,b2=0,b3=0,b4=0;string h="";
 
    for (int i=0;i<g.size();i++)
    {
        if (isalpha(g[i]))
        {
            if (g[i]=='a' || g[i]=='e' || g[i]=='i' || g[i]=='o' || g[i]=='u') b1++;
            else b2++;
        }
        else h+='?';
    }
    b4=h.size();
 
    while (b3!=(h.size()+1))
    {
        if (abs((b1+b3)-(b2+b4))<=k)
        {
            string rez="";
 
            for (int i=0;i<b3;i++) rez+='1';
            for (int i=0;i<b4;i++) rez+='0';
 
            permutations(rez,0,rez.size(),b3,b4);
        }
 
        b3++;
        b4--;
    }
 
    cout<<suma<<endl;
    return 0;
}
