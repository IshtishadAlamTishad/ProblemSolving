
/*
Author : Tishad07
Time   : 6/27/2023 2:21:37 PM +06
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,ct=0;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;++i) {
        int x;
        cin >> x;
        a.push_back(x);
    }   
    
    for(int s=0;s<n;s++) {
        bool sorted = true;
    /*    cout << "Step : " << s <<" --> ";
        for(auto x:a) cout << x << " ";
        cout << '\n';
      */   
        for(int i=0;i<n-s-1;++i) {
            if(a[i] > a[i+1]) {
                swap(a[i],a[i+1]);
                sorted = false;
                ct++;
            }
        }
        if(sorted) break;
    }
  //  cout << "\nSorted Array : ";
    
    cout << a[0];
    for(int i=1;i<n;++i) {
        cout << " " << a[i];
    }
    cout << '\n';
    cout << ct << '\n';
    
    
}
