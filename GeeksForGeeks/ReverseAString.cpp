
#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	cout << reverseWord(s) << endl;
	}
	return 0;
}

string reverseWord(string s) {
    char x;
    for(int i=0,l=s.length();i<l/2;++i) {
        x = s[i];
        s[i] = s[l-1-i];
        s[l-1-i] = x;
    }
    return s;
}
