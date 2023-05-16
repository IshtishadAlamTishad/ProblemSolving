// Author : Tishad
#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 1e5+123;
int a[N];
int c[4*N];

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n;
	cin >> n;
	for(int i=1;i<=4*n-1;++i) {
		int x;
		cin >> x;
		c[x]++;
	}
	for(int i=1;i<=n;++i) {
		if(c[i]==3) {
			cout << i;
			break;
		}
	}
}
