// Author : TISHAD07

// Problem link : https://codeforces.com/problemset/problem/263/A

// Solution :

#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define r(a,b,c) for(int a=b;a<=c;++a)



int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int op=0;
    int a[6][6];

    r(i,1,5) {
        r(j,1,5) {
            cin >> a[i][j];
        }
    }
    int x=0,y=0;
    r(i,1,5) {
        r(j,1,5) {
            if(a[i][j]==1) {
                x=i;
                y=j;
            }
        }
    }
   //cout << x << " " << y << '\n';
    op = abs(x-3)+abs(y-3);
    cout << op;
}