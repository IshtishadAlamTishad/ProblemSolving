
/*
Author : Tishad07
Time   : 6/12/2023 1:35:44 AM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e3;

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;++i) cin >> a[i];
  int ct=0;
  
  for(int i=1;i<n;++i) {
  if(a[i] < a[i-1]) {
    ct+= a[i-1]-a[i];
    a[i] = a[i-1];
  }
}
  cout << ct << '\n';
}
