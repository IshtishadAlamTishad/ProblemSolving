#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int a[],int n,int k) {
	//sort(a,a+n);
	int lo=0,hi=n-1;
	while(lo<=hi) {
		int mid = (hi+lo)/2;
		if(a[mid]==k) {
			return mid;
		} else if(a[mid] < k) {
			lo = mid+1;
		} else if(a[mid] > k) {
			hi = mid-1;
		}
	}
	return -1;
}


int main()
{
	// array must be sorted
	int n = 7;
	int a[n] = {1,2,2,3,4,7,10};
	// sort(a,a+n);
	sort(a,a+n);
	int k = 4;
	if(Binary_Search(a,n,k)!=-1) {
		cout << k << " is present at index = " << Binary_Search(a,n,k);
	} else {
		cout << k << " is not present at array";
	}

}

// Time Complexity : O(log n) // base2
