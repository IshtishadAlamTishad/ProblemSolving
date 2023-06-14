// (Practice) 

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int n,ct=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i) cin >> a[i];
    for(int i=1;i<=n;++i) {
        for(int j=i+1;j<=n;++j) {
            for(int k=j+1;k<=n;++k) {
                if(a[i] < a[j] and a[j] > a[k]) ct++;
            }
        }
    }   
    cout << ct ;
}
