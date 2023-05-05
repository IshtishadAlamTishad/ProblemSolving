#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b==c) {
            cout << "+\n";
        } else if(a-b==c) {
            cout << "-\n";
        }
    }
}