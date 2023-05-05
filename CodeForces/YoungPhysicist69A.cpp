// Author : TISHAD07

// Problem link : https://codeforces.com/problemset/problem/69/A

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

    int n;
    cin >> n;
    int x=0,y=0,z=0;
    r(i,0,n) {
        int a,b,c;
        cin >> a >> b >> c;
        x+=a;
        y+=b;
        z+=c;
    }

    cout << ((x==0 and y==0 and z==0) ? "YES":"NO");
}