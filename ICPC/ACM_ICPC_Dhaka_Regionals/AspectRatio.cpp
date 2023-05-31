
/*
Author : Tishad07
Time   : 5/31/2023 10:53:39 PM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  
  int t;
  cin >> t;
  for(int i=1;i<=t;++i) {
    cout << "Case " << i << ": ";
    double k;
    cin >> k;
    double d = ((k*k)-1)/(4-(k*k));
    double r = sqrtl(d);
    cout << fixed << setprecision(4) << r << '\n';
  } 
}
