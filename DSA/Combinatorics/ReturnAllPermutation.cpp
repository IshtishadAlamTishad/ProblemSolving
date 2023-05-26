
/*

Author : Tishad07

Time   : 5/26/2023 1:00:42 PM +06

*** Return All permuation using STL 

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	ll n;
	cin >> n;
	vector<ll> v;
	vector<vector<ll>> permutations;
	for(int i=0;i<n;++i) {
		ll x;
		cin >> x;
		v.push_back(x);
	}
	
	do {
		permutations.push_back(v);
	}while(next_permutation(v.begin(),v.end()));
		
		
	for(auto v:permutations) {
		for(auto i:v) {
			cout << i << " ";
		}
		cout << '\n';
	}
		
		
	
}
