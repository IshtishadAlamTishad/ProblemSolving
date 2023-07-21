/*
 
Author : Tishad07
 
Time   : 7/21/2023 9:15:12 PM +06
 
*/
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
const int N = 2e3;
 
void solve()
{
	int a,b,c;
  cin >> a >> b >> c;
  cout << ((a+b>=10 or b+c>=10 or a+c>=10) ? "YES" : "NO");
  cout << '\n';
}
 
int main()
{
	
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	
}
