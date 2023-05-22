#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mx = 1e8+123;
bool vis[mx];
int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n,ct=0;
	cin >> n;
	
	for(int i=1;i<=n;++i) {
		vis[i*i] = 1;
	}
	
	for(int a=1;a<=n;++a) {
		for(int b=a;b<=n;++b) {
			int d = (a*a) + (b*b);
			if(d>=mx) break;
			if(vis[d]) {
				ct++;
			}
		}
	}
	cout << ct << '\n';
	
}
