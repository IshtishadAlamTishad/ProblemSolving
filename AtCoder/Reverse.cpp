#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long

const int N = 1e5+150;
char s[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int l,r;
	cin >> l >>r;
	cin >> s;
	int n = strlen(s);
	for(int i=l-1,j=r-1;i<j;++i,--j) {
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	for(int i=0;i<n;++i) {
		cout << s[i];
	}
	/*
	if(s==tmp) {
		cout << "Palindrome\n";
	} else {
		cout << "NOT\n";
	}
	*/
}
