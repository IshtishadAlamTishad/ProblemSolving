
/*
Author : (Practice)
Time   : 6/14/2023 9:28:27 PM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
const int N = 2e3;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int n,k;
    cin >> n >> k;
    int ans=0;
    int a[n];   
    for(int i=1;i<=n;++i) cin >> a[i];
        
    for(int i=1;i<=n;++i) {
        int segmentSum = 0;
        int ct=0;
        for(int j=i;j<=n;++j) {
            segmentSum += a[j];
            ct++;
            if(ct==k) {
                break;
            }
        }
        if(ct==k) {
            if(segmentSum > ans) {
                ans = segmentSum;
            }
        }
    }
    cout << ans << '\n';
}

// Time complexcity : O(n*k)
