
/*
Author : Tishad07
Time   : 5/31/2023 8:39:02 PM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 2e3;

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  
  int t;
  cin >> t;
  for(int i=1;i<=t;++i) {
    cout << "Case " << i << ": ";
    int p,s,r;
    cin >> p >> s >>r;
    cout << ((p==s && r!=1) ? "No\n":"Yes\n");
  } 
  
}
