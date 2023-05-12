// Author : TISHAD07

#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 2e5+123;
int a[N];

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n,ans=0;
	cin >> n;
	for(int i=1;i<=n;++i) cin >> a[i];
	
	for(int i=1;i<=n;++i) {
		if(a[i]>=a[i+1]) {
			 ans = a[i];
			 break;
		} else continue;
	}
	cout << ans;
}
