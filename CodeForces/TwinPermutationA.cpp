/* 
  Author : TISHAD07  
  Time   : 5/29/2023 12:13:35 AM +06 GMT
*/
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define r(a,b,c) for(auto a=b;a<c;++a)
 
void test()
{  
  int  n;
  cin >> n;
  int a[n]={0},b[n]={0};
  r(i,0,n) cin >> a[i];
  
  r(i,0,n) {
    b[i] = n-a[i]+1;
  }
  
  r(i,0,n) {
    cout << b[i] << " ";
  }   
  cout << '\n';
}
 
int32_t main()
{
  int q;
  cin >> q;
  while(q--) {
    test();
  }
 
}
