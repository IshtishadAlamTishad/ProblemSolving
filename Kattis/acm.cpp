/*
   Author : TISHAD07
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

int a[26];

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);

	int n;
	char c;
	string s;
	int ct=0,sum=0;
	while(true) {
		cin >> n;
		if(n==-1) {
			break;
		} else {
			cin >> c >> s;
			if(s=="right") {
				sum += n+(a[c-'A']*20);
				ct++;
			} else if(s=="wrong") {
				a[c-'A']++;
			}
		}
	}
	cout << ct << " " << sum;
}
