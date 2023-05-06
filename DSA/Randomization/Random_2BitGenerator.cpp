#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    srand(time(0));
    int n;
    cin >> n;
    for(int i=0;i<n;++i) {
        int x = (rand()%2);
        cout << ((x) ? "True\n" : "False\n");
    }

}
