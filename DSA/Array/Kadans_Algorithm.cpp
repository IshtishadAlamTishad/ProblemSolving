#include<bits/stdc++.h>
using namespace std;

int KadansAlgo(int a[],int n)
{
	int cs=0;
	int largest_sum=0;
	for(int i=0;i<n;++i) {
		cs = cs + a[i];
		if(cs<0) {
			cs=0;
		}
		largest_sum = max(largest_sum,cs);
	}
	return largest_sum;
}

int main()
{
  int a[] = {1,2,3,4};
  int n = sizeof(a)/sizeof(int);
   cout << "Largest Subarray sum = " << KadansAlgo(a,n); 
}

/*
 Time Complexity: O(N)
*/
