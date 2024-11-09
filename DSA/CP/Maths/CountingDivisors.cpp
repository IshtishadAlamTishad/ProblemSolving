#include<bits/stdc++.h>
using namespace std;


const int mx =1e6;
int a[mx];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=1;i<=mx;++i) {
		for(int j=i;j<=mx;j+=i) {
			a[j]++;
		}
	}
	int q;
	cin >> q;
	while(q--) {
		int x;
		cin >> x;

		cout << a[x] << '\n';
	}	
}
