#include <bits/stdc++.h>
using namespace std;
int main ()
{
    double x;
    cin>>x;
    int y = x;

    if ((x-y)>0 && (x-y)<=1)
        cout<<"float "<<y<<" "<<(x-y);
    else
        cout<<"int "<<x;

    return 0;
}
