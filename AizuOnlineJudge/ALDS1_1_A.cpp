
/*
Author : Tishad07
Time   : 6/27/2023 2:14:53 PM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;++i) {
		int x;
		cin >> x;
		v.push_back(x);
	}	
	
	for(int i=0;i<n;++i) {
	int k = v[i];
	int j = i-1;
	
	while(j>=0 && v[j] > k) {
		v[j+1] = v[j];
		--j;
		
	}
	v[j+1] = k;
	
	cout << v[0];
	for(int j=1;j<n;++j) cout << " " << v[j];
		cout << '\n';
	
	}
	
}
