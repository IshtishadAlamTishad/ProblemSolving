#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,z,a,b,c;
    cin >> n;
    z = n%10;
    n/=10;
    y = n%10;
    n/=10;
    x = n%10;
    
    a = (x*100)+(y*10)+z;
    b = (y*100)+(z*10)+x;
    c = (z*100)+(x*10)+y;

    cout << a+b+c;
}