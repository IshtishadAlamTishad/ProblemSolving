
/*
Author : (Practice)
Time   : 6/6/2023 1:22:43 AM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 2e3;

void test()
{
  int x;
  cin >> x;
  int a[30]={0};
  int ct=0;
  while(x>0) {
    a[ct++] = x%10;
    x/=10;
  }
  for(int i=0,j=ct-1;i<j;++i,--j) {
    swap(a[i],a[j]);
  }
  int temp = a[0];
  for(int i=0;i<ct;++i) {
      int r = 9-a[i];
      if(r<a[i]) {
        a[i] = r;
      }
  }
  if(a[0]==0) a[0] = temp;
  for(int i=0;i<ct;++i) {
    cout << a[i];
  }
  cout << '\n';
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  
  int t=1;
  //cin >> t;
  while(t--) {
    test();
  }
  
  
}
