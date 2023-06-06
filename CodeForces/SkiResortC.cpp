/*
 
Author : Tishad07
 
Time   : 6/6/2023 10:14:23 PM +06 GMT
 
*/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
inline int func(int ct,int k) {
  if(ct==0 || k>ct) return 0;
  int r = ct-k+1;
  k++;
  while(k!=ct+1) {
    r += ct-k+1;
    k++;
  }
  return r;
}
 
void test()
{
  int n,k,q,ans=0,ct=0,i=0;
  cin >> n >> k >> q;
  
  vector<int> a;
  while(n--) {
    int x;
    cin >> x;
    a.push_back(x);
    
    if(a[i]<=q) { 
    ct++;
    } else {
      ans+=func(ct,k);
      ct=0;
    }
    i++;
  }
  if(ct!=0) {
    ans+=func(ct,k);
  }
  cout << ans << '\n';
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
