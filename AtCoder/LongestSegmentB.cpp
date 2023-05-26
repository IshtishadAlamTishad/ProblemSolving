
/*
Author : Tishad07
Time   : 5/26/2023 9:39:33 PM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;
int a[N],b[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n;
	cin >> n;
	for(int i=1;i<=n;++i) {
		cin >> a[i] >> b[i];
	}
	int d=0;
	for(int i=1;i<=n;++i) {
		for(int j=i+1;j<=n;++j) {
			int cd = ((a[i]-a[j])*(a[i]-a[j]))+((b[i]-b[j])*(b[i]-b[j]));
			if(cd > d) d = cd;
		}
	}
	cout << fixed << setprecision(10) << sqrt(d);
}
