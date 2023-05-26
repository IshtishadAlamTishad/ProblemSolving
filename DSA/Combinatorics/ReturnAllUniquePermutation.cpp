
/*

Author : Tishad07

Time   : 5/26/2023 12:47:50 PM +06

** return all possible unique permutations

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e3;

void helper(vector<ll> a,vector<vector<ll>> &ans,int idx) {
	if(idx==a.size()) {
		ans.push_back(a);
		return;
	}
	for(int i=idx;i<a.size();++i) {
		if(i!=idx and a[i]==a[idx]) {
			continue;
		}
			swap(a[i],a[idx]);
			helper(a,ans,idx+1);
	}
 }
vector<vector<ll>> permute(vector<ll> nums) {
	sort(nums.begin(),nums.end());
	vector<vector<ll>>ans;
	helper(nums,ans,0);
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	ll n;
	cin >> n;
	vector<ll> a(n);
	for(auto &i:a) {
		cin >> i;
	}
	vector<vector<ll>> res = permute(a);
	for(auto v:res) {
		for(auto i:v) {
			cout << i << " ";
		}
		cout << '\n';
	}
	
}
