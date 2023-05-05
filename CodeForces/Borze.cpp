// Author : TISHAD07

// Problem link : https://codeforces.com/contest/32/problem/B

// Solution :

#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define r(a,b,c) for(int a=b;a<c;++a)

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    char c;
    while(cin>>c) {
        if(c=='-') {
            cin >> c;
            if(c=='-') cout << 2;
            else cout << 1;
        } else cout << 0;
    }

}