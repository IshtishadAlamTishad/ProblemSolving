/* 
  Author : Tishad07
*/

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    double x,y;
    cin >> x >>y;

    if(x==0 and y==1) cout << "ALL GOOD";
    else if(y==1) cout << "IMPOSSIBLE";
    else {
        cout << fixed << x/(1-y) << setprecision(10);
    }
}
