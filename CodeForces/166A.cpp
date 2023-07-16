
/*
Author : Tishad07
Time   : 7/17/2023 12:15:47 AM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;

struct Rank
{
  int score;
  int penalty;	
};

bool cmp(Rank a,Rank b) {
	if(a.score > b.score) return true;
	else if(a.score ==b.score and a.penalty < b.penalty) return true;
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n,k;
	cin >> n >> k;
	
	vector<Rank> v;
	for(int i=0;i<n;++i) {
		int s,p;
		cin >> s >> p;
		Rank a;
		a.score = s;
		a.penalty = p;
		
		v.push_back(a);
		
	}
	sort(v.begin(),v.end(),cmp);
	
	int ct=0;
	for(int i=0;i<v.size();++i) {
		if(v[k-1].score==v[i].score and v[k-1].penalty==v[i].penalty) {
			ct++;
		}
	}
	cout << ct << '\n';
	
}
