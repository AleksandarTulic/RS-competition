#include <iostream>
 
using namespace std;
 
int main()
{
    int tests;
    cin>>tests;
 
    string g;
    getline(cin,g,'\n');
 
    while (tests--)
    {
        getline(cin,g,'\n');
 
        char a = g[0];
        int br = 1;
 
        for (int i=1;i<g.size();i++)
        {
            if ( g[i] != a )
            {
                cout<<br<<a;
                br = 1;
                a=g[i];
            }
            else br++;
        }
        cout<<br<<a;
        cout<<endl;
    }
    return 0;
}
