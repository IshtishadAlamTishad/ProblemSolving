#include<bits/stdc++.h>
using namespace std;
#define int long long int


int calc(int a,int b,int c,int x) {
	return a*x*x + b*x + c;
}

int32_t main()
{

 int a,b,c,k;
 cin >> a >> b >> c >> k;
int ans=-1;
 int l=0,r=2e5;
 
 while(l<=r) {
 	int mid = (l+r)/2;
 	//cout << "l = " << l << " ,r = " << r<< " ,mid: " << mid << " , Calc : " << calc(a,b,c,k) << '\n';
 	if(calc(a,b,c,mid) >= k) {
 		ans = mid;
 		r=mid-1;
 	}
 	else {
 		l =mid+1;
 	}


 }
 cout << ans << '\n';

}
