
/*
Author : Tishad07
Time   : 6/10/2023 1:17:54 AM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
  
  double x,y,z,a,b,c;
  cin >> x >> y >> z >> a >> b >> c;
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (y*z)+(b*c) << '\n';
  
}
