/*
Author : Tishad07
Time   : 5/27/2023 1:48:05 PM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	long long int n;
	cin >> n;
	cout << n << " ";
 
	if(n!=1) {
	while(true)
	{
		if(n%2==0) {
			n/=2;
		} else {
			n *=3;
			n+=1;
		}
		cout << n << " ";
		if(n==1) {
			break;
		}
	}
	}
}
