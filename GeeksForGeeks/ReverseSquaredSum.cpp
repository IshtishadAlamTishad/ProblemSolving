#include<bits/stdc++.h>
using namespace std;

void test()
{
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;++i) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    long long sum=0;
    int k=1;
    
    for(int i=n-1;i>=0;--i) {
        sum += (k*a[i]*a[i]);
        k*=-1;
    }
    cout << sum << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        test();
    }
}
