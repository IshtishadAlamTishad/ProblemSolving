// Author : TISHAD07
// PRACTICE SESSION

#include<bits/stdc++.h>
using namespace std;
#define int long long int
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

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	int n,s=0;
	cin >> n;
	int *v = new int[n];
	for(int i=0;i<n;++i) {
		v[i] = 0;
	}
	for(int i=0;i<n;++i) {
		cin >> v[i];
		s+=v[i];
	}
	int sw = (n*(n+1))/2;
	int k=sw-s;
	v[n] = k;
	F2(v,0,n);	
	int ans=0;
	int lo=1,hi=n,mid=0;
	while(lo<hi) {
		if(v[mid]==k) { ans = k; 
		break;
		}
		(v[mid] < k) ? lo = mid++ : hi = mid--;
	}
	cout << ans << '\n';
}
