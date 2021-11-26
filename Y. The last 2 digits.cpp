#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int newA = a %100;
    int newB = b %100;
    int newC = c %100;
    int newD = d %100;
    int mult = newA * newB * newC * newD;

    if ( mult%100 <=9 )
        cout<<"0"<<mult%100;
    else
        cout<<mult%100;



    return 0;
}
