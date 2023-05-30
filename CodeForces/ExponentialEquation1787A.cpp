
/*

Author : Tishad07

Time   : 5/31/2023 1:48:45 AM +06 GMT

*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 2e3;

void test()
{
  int n;
  cin >> n;
  if(n%2==0) cout << 1 << " " << (n/2) << '\n';
  else cout << "-1\n";
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  
  int t;
  cin >> t;
  
  while(t--) {
    test();
  }
  
}
