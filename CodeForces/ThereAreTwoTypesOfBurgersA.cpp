#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
const int N = 2e3;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  
  int t;
  cin >> t;
  while(t--) {
    
  int b,p,f,h,c;
  cin >> b >> p >> f >> h >>c;
  
  int mxPrice= h,mxPaticeNum=p;
  int mnPrice=c,minPaticeNum=f;
  
  if(mxPrice < mnPrice) {
    swap(mxPrice,mnPrice);
    swap(mxPaticeNum,minPaticeNum);
  } 
  
  int burgerNumber = b/2;
  int ans=0;
  (mxPaticeNum > burgerNumber) ? (ans+= (burgerNumber*mxPrice), burgerNumber =0) : (ans+=(mxPaticeNum*mxPrice),burgerNumber -= mxPaticeNum);
  (minPaticeNum > burgerNumber) ? (ans+= (burgerNumber*mnPrice) ) : (ans+= (minPaticeNum*mnPrice));
  
  cout << ans << '\n';
}
}
