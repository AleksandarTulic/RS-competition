#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    string rijec, g1, g2;
 
    getline(cin,rijec,'\n');
    cin>>g1>>g2;
 
    string kupi="";
    vector <string> rij;
    bool flag=true;
 
    for (int i=0;i<rijec.size();i++)
    {
        if (rijec[i]!=' ') kupi+=rijec[i];
        else
        {
            if (kupi==g1) {rij.push_back(g2);flag=false;}
            else rij.push_back(kupi);
            kupi="";
        }
    }
    if (kupi==g1) {rij.push_back(g2);flag=false;}
    else rij.push_back(kupi);
 
    if (flag) {cout<<"U recenici ne postoji rijec koju treba mijenjati, tako da recenica glasi: "<<endl<<rijec<<endl;return 0;}
    for (int i=0;i<rij.size();i++)
        if (i!=rij.size()-1) cout<<rij[i]<<" ";
        else cout<<rij[i]<<endl;
    return 0;
}
