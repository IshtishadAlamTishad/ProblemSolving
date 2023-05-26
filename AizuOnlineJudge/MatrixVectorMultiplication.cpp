
/*

Author : Tishad07

Time   : 5/26/2023 8:55:55 PM +06 GMT

*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int n = 123;
int a[n][n],b[n],c[n];

int32_t main()
{
	ios::sync_with_stdio(false);cin.tie(0),cout.tie(0);
	
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;++i) {
		for(int j=1;j<=m;++j) {
			cin >> a[i][j];
		}
	}
	for(int i=1;i<=m;++i) cin >> b[i];
	for(int i=1;i<=n;++i) {
		c[i] = 0;
		for(int j=1;j<=m;++j) {
			c[i] += (a[i][j] * b[j]);
		}
		cout << c[i] << '\n';
	}
	
}
