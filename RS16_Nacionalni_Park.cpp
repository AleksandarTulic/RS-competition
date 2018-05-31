#include <iostream>
 
using namespace std;
 
struct point{ int x, y; };
 
int main()
{
    int n;
    cin>>n;
 
    point a[n];
    for (int i=0;i<n;i++) cin>>a[i].x>>a[i].y;
 
    int k;
    cin>>k;
 
    while (k--)
    {
        int br=0;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
 
        for (int i=0;i<n;i++)
            if ( ( a[i].x == x1 || a[i].x == x2 ) && ( a[i].y >= y1 && a[i].y <= y2 ) ) br++;
            else if ( ( a[i].y == y1 || a[i].y == y2 ) && ( a[i].x >= x1 && a[i].x <= x2 ) ) br++;
        cout<<br<<endl;
    }
    return 0;
}
