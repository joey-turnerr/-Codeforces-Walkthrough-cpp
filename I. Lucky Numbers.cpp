#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    int firstD= x%10;
    int secondD =(x-firstD)/10;

    if (firstD%secondD==0 || secondD%firstD==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
