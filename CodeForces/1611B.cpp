/*
Author : Tishad07
Time   : 7/19/2023 11:53:34 PM +06
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 2e3;

void solve()
{
	int a,b;
	cin >> a >> b;
	cout << min(min(a,b),(a+b)/4) << '\n';
}

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		solve();
	}	
	
}
