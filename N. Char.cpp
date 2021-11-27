#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char x;
    cin >>x;
    if (x<97)
    {
        char z = x+32;
        cout <<z;
    }
    else
    {
        char z = x-32;
        cout<<z;
    }
    return 0;
}
