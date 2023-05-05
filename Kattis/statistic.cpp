/* 
  Author : Tishad07
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    for(int i=1;cin>>n;++i) {
        long mn = LONG_MAX,mx = LONG_MIN;
        for(int i=0;i<n;++i) {
            long m;
            cin >> m;
            mn = m<mn ? m:mn;
            mx = m>mx ? m:mx;
        }
        cout << "Case " << i << ": " << mn << " " << mx << " " << mx-mn << '\n';
    }
}
