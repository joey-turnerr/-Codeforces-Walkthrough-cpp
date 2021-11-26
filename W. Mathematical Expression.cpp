#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;

    switch (s)
    {
        case '+':
            if (c==(a+b))
            {
               cout<<"Yes";
                break;
            }
            else
            {
                cout<<a+b;
                break;
            }

        case '-':
            if (c==(a-b))
            {
               cout<<"Yes";
                break;
            }
            else
            {
                cout<<a-b;
                break;
            }
        case '*':
            if (c==(a*b))
            {
               cout<<"Yes";
                break;
            }
            else
            {
                cout<<a*b;
                break;
            }

        default:
            break;

    }
    return 0;
}
