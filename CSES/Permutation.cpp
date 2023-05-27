
/*

Author : Tishad07

Time   : 5/27/2023 1:48:05 PM +06 GMT

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n;
	cin >> n;
	vector<int> v;
	if(n==1) cout << "1\n";
	else if(n==2 or n==3) cout << "NO SOLUTION\n";
	else {
		for(int i=2;i<=n;i+=2) v.push_back(i);
		for(int i=1;i<=n;i+=2) v.push_back(i);	
	}

	for(int i=0;i<v.size();++i) {
		cout << v[i] << ' ';
	}
	
	
	/* You can also print value from loop in else block
	
		else {
		for(int i=2;i<=n;i+=2) cout << i << ' ';
		for(int i=1;i<=n;i+=2) cout << i << ' ';		
		}
	*/
}
