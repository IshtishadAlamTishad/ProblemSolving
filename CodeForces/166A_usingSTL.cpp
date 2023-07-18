/*
Author : Tishad07
Time   : 7/18/2023 10:26:21 PM +06
*/

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b) {
	if(a.first > b.first) return true;
	else if(a.first ==b.first and a.second < b.second) return true;
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n,k;
	cin >> n >> k;
	
	vector<pair<int,int>> v;
	for(int i=0;i<n;++i) {
		int s,pe;
		cin >> s >> pe;
		pair<int,int> p;
		p.first = s;
		p.second = pe;
		v.push_back(p);
	}
	sort(v.begin(),v.end(),cmp);
	
	int ct=0;
	for(int i=0;i<v.size();++i) {
		if(v[k-1].first==v[i].first and v[k-1].second==v[i].second) {
			ct++;
		}
	}
	cout << ct << '\n';
	
}
