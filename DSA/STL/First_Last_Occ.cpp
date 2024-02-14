#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> a,int n,int x) {
 		int fo = -1 ;
        int l = 0, r = n-1;
        while ( l <= r ) {
            int mid = ( l + r ) / 2;
            if ( a[mid] == x ) fo = mid;
            if ( a[mid] >= x ) {
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        return fo;
}

int lastOcc(vector<int>a,int n,int x) {
	int l = 0,r = n-1,lo=-1;
        while(l<=r) {
            int mid = ( l + r ) / 2;
            if (a[mid] == x ) lo = mid;
            if (a[mid] <= x ) {
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }
        return lo;
}


int main()
{
	vector<int> v = {1,2,3,4,5,6,6,6,7,8,9};

	int n = v.size();
	int x = 6;

	int f = firstOcc(v,n,x);
	int l = lastOcc(v,n,x) ;
	cout << l << " " << f << '\n';
	cout << "Occurance of " << x << " = " << (l-f+1);

}
