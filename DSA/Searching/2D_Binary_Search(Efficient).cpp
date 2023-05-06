#include<bits/stdc++.h>
using namespace std;

vector<int> Binary_Search(vector<vector<int> > a,int k)
{
	int r = a.size();
	int c = a[0].size();
	int lo=0,hi=r*c-1;
	while(lo<=hi) {
		int mid = lo+(hi-lo)/2;

		int kc = mid%c;
		int kr = mid/c;
		int val = a[kr][kc];

		if(val==k) {
			return {kr,kc};
		}
		if(val<k) {
			lo = mid+1;
		} else {
			hi = mid-1;
		}
	}
	return {-1,-1};
}


int main()
{
  vector<vector<int>> a = {
  	{1,2,3},
  	{4,5,6},
  	{7,8,9},
  };
  int k = 6;
  cout << "Element " << k << " found at index : ";
  vector<int> result = Binary_Search(a,k);
  for(int i=0;i<result.size();++i) {
  	if(i==result.size()-1) {
  		cout << result[i];
  	} else {
  		cout << result[i] << " ";
  	}
  }
}

/*
2D -> 1D -> 2D
 Time Complexity: O(log N)
*/
