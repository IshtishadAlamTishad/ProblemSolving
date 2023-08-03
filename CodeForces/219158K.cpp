#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
 
	int a[3];
	for(int i=0;i<3;++i) cin >> a[i];
	cout << *min_element(a,a+3) << " " << *max_element(a,a+3);
 
}
