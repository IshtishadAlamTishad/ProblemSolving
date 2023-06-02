
// Author : Tishad07

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;++i) {
        cout << "Case " << i << ":\n";
        string s;
        deque<int> d;

        int n,c,x;
        cin >> n >>c;

        while(c--) {
            cin >> s;
            if(((s=="pushLeft") or (s=="pushRight")) and (d.size()>=n)) {
                cin >> x;
                 cout << "The queue is full\n";
            } else if(((s=="popLeft") or (s=="popRight")) and ( d.size()==0)) {
        cout << "The queue is empty\n";                
        }else if(s== "pushLeft") {
                cin >> x;
                d.push_front(x);
                cout << "Pushed in left: " << x << '\n';
            } else if(s=="pushRight") {
                cin >> x;
                d.push_back(x);
                cout << "Pushed in right: " <<  x << '\n';
            } else if(s=="popLeft" and d.size()>0) {
                x = d.front();
                d.pop_front();
                cout << "Popped from left: " << x  <<'\n';
            } else if(s=="popRight" and d.size()>0) {
                x = d.back();
                d.pop_back();
                cout << "Popped from right: " << x << '\n';
            }
        }
    }
}
