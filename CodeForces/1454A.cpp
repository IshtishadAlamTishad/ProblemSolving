
/*
Author : Tishad07
Time   : 7/19/2023 11:53:34 PM +06
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;

void solve()
{
	int n;
	cin >> n;
	cout << "2 ";
	for(int i=3;i<=n;++i) {
		cout << i << " ";
	}
	cout << "1";
	cout << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		solve();
	}	
	
}
