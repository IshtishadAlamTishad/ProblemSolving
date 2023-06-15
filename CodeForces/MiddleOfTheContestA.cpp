/*
Author : Tishad07
Time   : 6/15/2023 6:28:23 PM +06 GMT
*/
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
   ios::sync_with_stdio(false);
   cin.tie(0),cout.tie(0);
 
  char s,k;
  int h,h1,h2,m,m1,m2,sec=0;
  cin >> h1 >> s >> m1 >> h2 >> k >>m2;
  
  int h1st = (h1*3600) + (m1*60);
  int h2nd = (h2*3600) + (m2*60);
 
  sec = (h1st+h2nd)/2;
  h = sec/3600;
  sec = sec%3600;
  m = sec/60;
 
  if(h<10 && m<10) { 
  cout << '0' << h << ":" << '0' << m << endl;
} else if(m<10){
  cout << h << ':' << '0' << m << endl;
}  else if(h<10){
  cout << '0' << h << ':'<< m << endl;
} else {
  cout << h << ':' << m << endl;
}
}
