#include<bits/stdc++.h>
using namespace std;

void reverseArray(int a[],int n)
{
 int s=0,e=n-1;
  while(s<=e) {
    swap(a[s],a[e]);
    s++;
    e--;
  }
}

int main()
{
  int a[] = {1,2,3,4};
  int n = sizeof(a)/sizeof(int);
  reverseArray(a,n);
  for(int i=0;i<n;++i) {
  	cout << a[i] << " ";
  }
}

/*
 Space Complexity : O(1)
 Time Complexity: O(N)
*/
