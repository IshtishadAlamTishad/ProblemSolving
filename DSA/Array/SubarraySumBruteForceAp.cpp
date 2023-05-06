#include<bits/stdc++.h>
using namespace std;

int subArraySum(int a[],int n)
{
	int largestSum=0;
 for(int i=0;i<n;++i) {
  for(int j=i;j<n;++j) {
    int subarraySum=0;
   for(int k=i;k<=j;++k) {
      subarraySum+=a[k];   
   }
   largestSum = max(largestSum,subarraySum);
  }
 }
 return largestSum;
}

int main()
{
  int a[] = {1,2,3,4};
  int n = sizeof(a)/sizeof(int);
   cout << "Largest Subarray sum = " << subArraySum(a,n); 
}

/*
 Time Complexity: O(N^3)
*/
