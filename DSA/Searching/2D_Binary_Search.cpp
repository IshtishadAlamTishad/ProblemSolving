#include<bits/stdc++.h>
using namespace std;

vector<int> Binary_Search(vector<vector<int> > a,int k)
{
    int r=0,c = a[r].size() - 1;
    while (r < a.size() && c >= 0) {
        if (a[r][c] == k) {
            return { r,c };
        }
        if(a[r][c] < k) {
            r++;
        } else { c--; }
    }
    return { -1, -1 };
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
  Time Complexity: O(N + M)
*/
