/*

Author : Tishad07

Time   : 5/27/2023 1:48:05 PM +06 GMT

*/

#include<bits/stdc++.h>
using namespace std;
 
#define r(a,b,c) for(int a=b;a<c;++a)
#define int long long int
int32_t main()
{
	int n;
	cin >> n;
	int a[n];
	int sum=0,s1=0;
	for(int i=0;i<n-1;++i) cin >> a[i];
 
	for(int i=0;i<n-1;++i) sum+=a[i];
 
	s1 = n*(n+1)/2;
 
	cout << s1-sum;
}
