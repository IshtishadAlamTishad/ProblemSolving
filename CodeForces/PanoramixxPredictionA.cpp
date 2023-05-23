// Author : TISHAD07
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;
vector<int> v;

bool prime(int n)
{
	if(n<=1) return false;
	for(int i=2;i<=sqrt(n);++i) {
		if(n%i==0) return false;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n,m;
	cin >> n >>m;
	for(int i=2;i<=50;++i) {
		if(prime(i)) {
			v.push_back(i);
		}
	}
	int i=0;
	while(v[i]!=n) {
		i++;		
	}
	cout << ((v[i]==n && v[i+1]==m) ? "YES\n" : "NO\n");
}
