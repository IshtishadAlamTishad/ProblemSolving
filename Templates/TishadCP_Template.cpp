#ifndef ONLINE_JUDGE
#include "Tishad07.h"
#else

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> orderedSet;
typedef long double dl;
typedef unsigned long ull;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vb vector<bool>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define fi first
#define se second
#define cl clock()
#define cl_s CLOCKS_PER_SEC
#define c_t clock_t
#define bug(...) __f(#__VA_ARGS__,__VA_ARGS__)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repr(i,n) for (int i = (n) - 1; i >= 0; --i)
#define T7(x) ios::sync_with_stdio(x); cin.tie(x); cout.tie(x);
#define google(x) cout << "Case : " << x;
#define check(it,a) for(auto it:a) 

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cerr << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
  const char* comma = strchr (names + 1, ',');
  cerr.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
#endif

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const double EPS = 1e-9;
const double pi = 3.141592653;
const int mod = 1e9+7;
const int M = 1e5+10;
const int l = 2e5+123;

void solve()
{


}

int main() {

    T7(0);
    c_t z = cl;
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    cerr << "\nR.T : " << ((dl)(cl-z)/cl_s) << " ms" << '\n';
}
