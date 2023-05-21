// Author : Tishad

#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n,q;
	cin >> n >> q;
	int a[n];
	for(int i=0;i<n;++i) cin >> a[i];
	
	while(q--) {
	int x,l=0,r=n-1,ans=n;
	cin >> x;	
	
	while(l<=r) {
		int mid = (l+r)/2;
		if(a[mid] == x) {
			ans = min(ans,mid);
		}
		if(a[mid] >= x) r = mid-1;
		else l = mid+1;
	}
	cout << ((ans==n) ? -1 : ans) << '\n';
	}
	
}
