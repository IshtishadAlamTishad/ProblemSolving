#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+123;
const int M = 1e6+9;
int a[N];
int b[M];
void init(int *a,int n) { for(int i=1;i<=n;++i) a[i] = 0;}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int t;
	cin >> t;
	for(int i=1;i<=t;++i) {
	for(int i=1;i<=M;++i) b[i] = 0;	
	int n;
	cin >> n;
	for(int i=1;i<=n;++i) cin >> a[i];
	for(int i=1;i<=n;++i) {
		b[a[i]]++;
	}
	int q;
	cin >> q;
	cout << "Case " << i << ":\n";	
	while(q--) {
		int x;
		cin >> x;
		cout << b[x] << '\n';
	}
}
}
