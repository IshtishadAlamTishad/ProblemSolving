#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    while(true) {
        int n,m;
        cin >> n >> m;

        if(n==0 and m==0) break;

        for(int j=1;j<=m;++j) cout << "#";
        cout << '\n';

        for(int i=2;i<=n-1;++i) {
            cout << "#";

            for(int j=2;j<=m-1;++j) {
                cout << ".";
            }

            cout << "#\n";
        }

        for(int j=1;j<=m;++j) cout << "#";
        cout << "\n\n";
    }
}



/*
3 4
5 6
3 3
0 0

####
#..#
####

######
#....#
#....#
#....#
######

###
#.#
###

*/
