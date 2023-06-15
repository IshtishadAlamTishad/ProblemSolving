
/*
Author : (Practice)
Time   : 6/15/2023 6:33:26 PM +06
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    string s;
    cin >> s;
    int ct=1,ans=1;
    int n = s.size();
    for(int i=1;i<n;++i) {
        if(s[i] == s[i-1]) {
            ct++;
        } else {
            ans = max(ans,ct);
            ct=1;
        }
        
    }   
    ans = max(ans,ct);
    cout << ans;
}
