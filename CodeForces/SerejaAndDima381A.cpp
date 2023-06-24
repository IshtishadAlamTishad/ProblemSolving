
/*
Author : Tishad07
Time   : 6/25/2023 12:40:34 AM +06 GMT
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main()
{
    ios::sync_with_stdio(false);cin.tie(0),cout.tie(0);
    
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }   
    int se=0,de=0,ct=1;
    while(!v.empty()) {
     if(ct%2!=0) {
        if(*v.begin() > v.back()) {
            se+= (*v.begin());
            v.erase(v.begin());
        } else {
            se+= (v.back());
            v.pop_back();
        }
     } else {
        if(*v.begin() > v.back()) {
            de+= (*v.begin());
            v.erase(v.begin());
        } else {
            de+= (v.back());
            v.pop_back();
        }
    }
    ct++;
    }
    cout << se << " " << de << '\n';
}
