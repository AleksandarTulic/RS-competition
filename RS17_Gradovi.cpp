#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int n,m,k;
vector <int> spe;
int G;
int graf[101][101];

void Floyd_Warshall()
{
    for (int k=1;k<=n;k++)
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
                graf[i][j] = min(graf[i][j], graf[i][k] + graf[k][j]);
}

void Permutacije()
{
    int kosta = 2e7;
    do
    {
        int put = 0;
        put+=graf[1][spe[0]];
        int pre = spe[0];

        for (int i=1;i<spe.size();i++)
        {
            put+=graf[pre][spe[i]];
            pre=spe[i];
        }

        put+=graf[pre][G];

        kosta = min(kosta, put);
    }while (next_permutation(spe.begin(), spe.end()));

    cout<<kosta<<endl;
}

int main()
{
    cin>>n>>m>>k;

    for (int i=0;i<k;i++)
    {
        int a;
        cin>>a;

        spe.push_back(a);
    }

    for (int i=0;i<=n;i++)
        for (int j=0;j<=n;j++)
            graf[i][j] = 2e7;

    cin>>G;

    for (int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        graf[a][b] = c;
        graf[b][a] = c;
    }

    Floyd_Warshall();
    Permutacije();
    return 0;
}
