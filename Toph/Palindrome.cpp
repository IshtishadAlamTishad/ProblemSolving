
/*
Author : Tishad07
Time   : 6/15/2023 6:08:53 PM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0),cout.tie(0);
    
    string s,r;
    cin >> s;
    r = s;
    reverse(s.begin(),s.end());
    bool ok = ((r==s) ? true : false);
    cout << ((ok) ? "Yes\n" : "No\n");
}
