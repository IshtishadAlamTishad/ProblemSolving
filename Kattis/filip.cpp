/* 
  Author : TISHAD07
*/

#include<bits/stdc++.h>
using namespace std;

int change(int a)
{
    int ans=0,x=0;
    while(a!=0) {
        x = a%10;
        ans = ans*10 + x;
        a/=10;
    }
    return ans;
}
int main()
{
    int a,b;
    cin >> a >> b;
    a = change(a);
    b = change(b);
    cout << ((a>b) ? a : b);
}
