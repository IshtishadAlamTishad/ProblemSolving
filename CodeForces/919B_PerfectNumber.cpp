
/*

Author : Tishad07

Time   : 5/24/2023 12:14:41 PM 

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;

int func(int n)
{
	int ans=0;
	while(n) {
		ans += n%10;
		n/=10;
	}
	return ans;
}

void solve() {
	int ans=0;
	
	int k;
	cin >> k;
	while(k) {
		ans++;
		if(func(ans)==10) k--;
	}
	cout << ans << '\n';
	
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int t=1;
//	cin >> t;
	while(t--) {
		solve();
	}
	
	
}
