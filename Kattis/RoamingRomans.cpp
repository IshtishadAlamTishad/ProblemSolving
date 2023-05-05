/* 
  Author : Tishad07
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    cin >> x;
    int d = x * (5280.0/4854.0)*1000 + 0.5;
    cout << d;
}
