#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    if (x==1)
    {
        cout<<-1;
    }
    else
    {
        for (int i=1; i<=x; i++)
        {
            if(i%2==0)
            {
                cout<<i<<"\n";
            }
        }

    }
    return 0;
}
