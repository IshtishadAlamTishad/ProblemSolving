#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

const double PI = 3.141592653589793238462643383279502884197;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

   double r;
   cin >> r;

   double a = PI*pow(r,2);
   double cc = 2*PI*r;
   cout << fixed << setprecision(6) << a << " " << cc;


}