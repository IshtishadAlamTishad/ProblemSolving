#include<bits/stdc++.h>
using namespace std;

#define int long long int

const int mx =1e7+123;
int a[mx];

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=1;i<=mx;++i) {
		for(int j=i;j<=mx;j+=i) {
			a[j]++;
		}
	}
	
	int ans=0;
	int n;
	cin >> n;
	for(int i=1;i<=n;++i) {
		ans += (1LL * i * a[i]);
	}
	cout << ans << '\n';
}
