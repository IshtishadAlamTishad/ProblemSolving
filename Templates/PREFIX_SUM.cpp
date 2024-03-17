#include<bits/stdc++.h>
using namespace std;

#define int long long int

const int mx = 2e5+123;
int a[mx];
int pre[mx];

int32_t main()
{
  int n,q;
  cin >> n >> q;

  for(int i=1;i<=n;++i) cin >> a[i];
  for(int i=1;i<=n;++i) {
    pre[i] = pre[i-1] + a[i];
  }

  while(q--) {
    int l,r;
    cin >> l >>r;
    cout << pre[r] - pre[l-1] << '\n';
}  

}
