#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    string g;
    cin>>g;
 
    string G[n];
    getline(cin,G[0],'\n');
    for (int i=0;i<n;i++) getline(cin,G[i],'\n');
 
    string poc=g;
 
    vector <string> put;
    put.push_back(poc);
 
    for (int i=0;i<200000000;i++)
    {
        if ( i!=0 && poc==g ) break;
 
        for (int j=0;j<n;j++)
        {
            string t1="",t2="";
            bool  flag=false;
 
            for (int q=0;q<G[j].size();q++)
            {
                if (G[j][q]=='-') {flag=true;continue;}
                if (flag==false) t1+=G[j][q];
                else t2+=G[j][q];
            }
 
            if (t1==poc)
            {
                G[j]="nista";
                put.push_back(t2);
                poc=t2;
            }
        }
    }
 
    for (int i=0;i<put.size();i++)
        if (i==(put.size()-1)) cout<<put[i]<<endl;
        else cout<<put[i]<<"-";
    return 0;
}
