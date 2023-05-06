#include<bits/stdc++.h>
using namespace std;

int subArrayPrefixSum(int a[],int n)
{
	int prefix[100] = {0};
	prefix[0] = a[0];

	for(int i=1;i<n;++i) {
		prefix[i] = prefix[i-1] + a[i];
	}

	int largest_sum=0;
	for(int i=0;i<n;++i) {
		for(int j=i;j<n;++j) {
			int subArraySum = (i>0) ? prefix[j] - prefix[i-1] : prefix[j];
			largest_sum = max(largest_sum,subArraySum);
		}
	}
	return largest_sum;
}

int main()
{
  int a[] = {1,2,3,4};
  int n = sizeof(a)/sizeof(int);
   cout << "Largest Subarray sum = " << subArrayPrefixSum(a,n); 
}

/*
 prefixSum[j] - prefixSum[i-1] if(i>=n)


if a -> 1 (2 4 -2) 3
then cur ->  1 3 7 5 8 ( a[i] += a[i+1])
 ps[j] - ps[i-1] = 5-1 =4;
 
 Time Complexity: O(N^2)
*/
