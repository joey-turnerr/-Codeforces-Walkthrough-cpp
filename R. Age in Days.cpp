#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    int years = n/365;
    int rem_month = n-(years*365);
    int month = rem_month/30;
    int days = (n-(years*365)-(month*30));

    cout<<years<<" years"<<"\n";
    cout<<month<<" months"<<"\n";
    cout<<days<<" days"<<"\n";

    return 0;
}
