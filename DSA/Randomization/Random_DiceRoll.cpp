#include<iostream>
#include<stdlib.h>
#include<time.h>
// #include<cstdlib>
// #include<ctime>

using namespace std;

// stdlib.h -> rand()
// seeds_Random = srand()

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    srand(time(0));
    int n;
    cin >> n;
    for(int i=0;i<n;++i) {
        cout << (rand()%6)+1 << '\n';
    }

}
