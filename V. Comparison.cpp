#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    char s;
    cin>>a>>s>>b;

    switch (s)
    {
        case '>':
            if (a>b)
            {
                cout<<"Right";
                break;
            }
            else
            {
                cout<<"Wrong";
                break;
            }

        case '=':
            if (a==b)
            {
                cout<<"Right";
                break;
            }
            else
            {
                cout<<"Wrong";
                break;
            }

        case '<':
            if (a<b)
            {
                cout<<"Right";
                break;
            }
            else
            {
                cout<<"Wrong";
                break;
            }

    }
    return 0;
}
