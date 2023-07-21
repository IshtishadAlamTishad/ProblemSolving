/*

Author : Tishad07

Time   : 7/21/2023 9:15:12 PM +06

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;

void solve()
{
	char a[8][8];
	string s;
	for(int i=0;i<8;++i) {
		for(int j=0;j<8;++j) {
			cin >> a[i][j];
		}
	}
	for(int i=0;i<8;++i) {
		for(int j=0;j<8;++j) {
			if(a[i][j] != '.') {
				s+=a[i][j];
			}
		}
	}
	cout << s << '\n';
}

int main()
{
	
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	
}
