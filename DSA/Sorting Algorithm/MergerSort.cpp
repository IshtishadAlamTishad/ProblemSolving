#include<bits/stdc++.h>
using namespace std;

#define ll long long

void F1(int *a,int l,int mid,int r) {
	int n = mid-l+1;
	int m = r-mid;
	int L[n];
	int R[m];
	for(int i=0;i<n;++i) {
		L[i] = a[l+i];
	}
	for(int i=0;i<m;++i) {
		R[i] = a[mid+1+i];
	}
	int i=0,j=0,k=l;
	while(i<n and j<m) {
	(L[i] < R[j]) ? a[k++] = L[i++] : a[k++] = R[j++];
	}
	while(i<n) {
		a[k++] = L[i++];
	} while(j<m) {
		a[k++] = R[j++];
	}
}
void F2(int *a,int l,int r)
{	int mid=0;
	if(l<r) {
		int mid = (l+r)/2;
		F2(a,l,mid);
		F2(a,mid+1,r);
		F1(a,l,mid,r);
	}
}

int main()
{
int n;
  cin >> n;
  int *a = new int[n];
  for(int i=0;i<n;++i) cin >> a[i];
  F2(a,0,n-1);
  for(int i=0;i<n;++i) {
cout << a[i] << " ";
  }
}
