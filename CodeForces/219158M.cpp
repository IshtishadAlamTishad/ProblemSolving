#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
 
	char x;
	cin >> x;
	int s = (int)x;
	if(s>=65 and s<=90) cout << "ALPHA\nIS CAPITAL";
	else if(s>=97 and s<=122) cout  << "ALPHA\nIS SMALL";
	else cout << "IS DIGIT";
 
}
