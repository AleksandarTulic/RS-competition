#include <iostream>
 
using namespace std;
 
int main()
{
    string dan;
    string dani[7]={"pon","uto","sre","cet","pet","sub","ned"};
    int h1,m1;
    int h2,m2;
 
    cin>>dan>>h1>>m1>>h2>>m2;
 
    int poz;
 
    for (int i=0;i<7;i++)
        if (dan==dani[i]) {poz=i;break;}
 
    for (int i=0;i<m2;i++)
    {
        m1++;
        if (m1==60)
        {
            h1++;
            m1=0;
            if (h1==24)
            {
                h1=0;
                poz++;
                if (poz==7) poz=0;
            }
        }
    }
 
    for (int i=0;i<h2;i++)
    {
        h1++;
        if (h1==24)
        {
            h1=0;
            poz++;
            if (poz==7) poz=0;
        }
    }
 
    cout<<dani[poz]<<" "<<h1<<" "<<m1<<endl;
    return 0;
}
