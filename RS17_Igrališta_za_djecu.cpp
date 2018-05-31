#include <iostream>
#include <cmath>
 
using namespace std;
 
#define d1 double
 
int main()
{
    d1 p1,q1,r1,p2,q2,r2;
 
    cin>>p1>>q1>>r1;
    cin>>p2>>q2>>r2;
 
    d1 uda=sqrt((p1-p2)*(p1-p2)+(q1-q2)*(q1-q2));
 
    if (uda==r1+r2) cout<<"Krugovi se dodiruju"<<endl;
    else if (uda>r1+r2) cout<<"Krugovi se ne preklapaju"<<endl;
    else cout<<"Krugovi se preklapaju"<<endl;
    return 0;
}
