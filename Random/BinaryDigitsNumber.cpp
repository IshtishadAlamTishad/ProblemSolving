// Author : TISHAD07 (Practice)

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e3;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int n;
    cin >> n;
    int ct=0;
    while(n>0) { // size of n
        ct += n%2;
        n/=2;        
    }   
    cout << ct;     
}
// time complexcity = O(log2(n)) ; digits number = log2(n)
