
/*
Author : Tishad07
Time   : 6/15/2023 5:54:40 PM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int n;
    cin >> n;
    set<int> s;
    while(n--) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
}
