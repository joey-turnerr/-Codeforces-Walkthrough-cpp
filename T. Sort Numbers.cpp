#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;

    if (a<=b && b<=c)
    {
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<"\n";
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    }
    else if (a<=c && c<=b)
    {
        cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<"\n";
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    }
    else if (b<=a && a<=c)
    {
        cout<<b<<"\n"<<a<<"\n"<<c<<"\n"<<"\n";
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    }
    else if (b<=c && c<=a)
    {
        cout<<b<<"\n"<<c<<"\n"<<a<<"\n"<<"\n";
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    }
    else if (c<=a && a<=b)
    {
        cout<<c<<"\n"<<a<<"\n"<<b<<"\n"<<"\n";
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    }
    else
    {
        cout<<c<<"\n"<<b<<"\n"<<a<<"\n"<<"\n";
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    }

    return 0;
}
