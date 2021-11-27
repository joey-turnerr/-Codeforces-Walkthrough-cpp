    #include <bits/stdc++.h>
    using namespace std;
    int main ()
    {
        int x,y,z;
        cin>>x>>y>>z;
     
        if (x<y && y<z)
            cout<<x<<" "<<z;
        else if (x<z && z<y)
            cout<<x<<" "<<y;
        else if (y<x && x<z)
            cout<<y<<" "<<z;
        else if (y<z && z<x)
            cout<<y<<" "<<x;
        else if (z<x && x<y)
            cout<<z<<" "<<y;
        else if (z<y && y<x)
            cout<<z<<" "<<x;
     
        return 0;
    }
