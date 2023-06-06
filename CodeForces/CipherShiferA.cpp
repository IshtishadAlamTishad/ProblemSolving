/*
 
Author : Tishad07
 
Time   : 6/6/2023 9:43:01 PM +06 GMT
 
*/
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
const int N = 2e3;
 
void test()
{
  int n;
  cin >> n;
  string s,a="";
  cin >> s;
  char d=s[0];
  for(int i=1;i<n;++i) {
    if(s[i]==d) {
      a+=d;
//    int j=1;
      d = s[i+1];
      i++;
    }
  }
  cout << a << '\n';
}
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  
  int t;
  cin >> t;
  while(t--) {
    test();
  } 
  
  
}
