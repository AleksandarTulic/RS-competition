#include <iostream>
 
using namespace std;
 
int main()
{
    int m[6][6];
    bool t[6][6];
 
    for (int i=1;i<6;i++)
        for (int j=1;j<6;j++)
            cin>>m[i][j],t[i][j]=false;
 
    int row=m[1][1]/10,col=m[1][1]%10;;
    int p1=1,p2=1;
 
    for (int i=0;i<2000000;i++)
    {
        if ( t[row][col] == true ) break;
        if ( m[row][col] % 10 == col && m[row][col] / 10 == row )
        {
            cout<<"blago je u "<<row<<" "<<col<<endl;
            return 0;
        }
 
        cout<<"posjetili "<<row<<" "<<col<<endl;
 
        t[p1][p2]=true;
        p1=row;p2=col;
 
        int a=row,b=col;
 
        row=m[a][b]/10;
        col=m[a][b]%10;
 
    }
 
    cout<<"Blago je ukradeno"<<endl;
    return 0;
}
