#include<bits/stdc++.h>
using namespace std;
#define r(a,b,c) for(int a=b;a<c;++a)
 void sortTeams(int a[], int n) 
  { 
      for (int i = 0; i < n-1; i++) 
      { 
          int min_idx = i; 
          for (int j = i+1; j < n; j++) 
          if (a[j] < a[min_idx]) 
              min_idx = j; 
          swap(a[min_idx], a[i]); 
      } 
  } 
void test()
{
  int n,r=0,df=0;
  cin >> n;
  int a[n];
  r(i,0,n) cin >> a[i];
  sortTeams(a,n);// Function to sort teams in ascending order by strength
  
  cout << abs(a[0]-a[n-1]) << '\n';
//   r(i,0,n-1) {
//     df = abs(a[i]-a[i+1]);
//     r+=df;
//   } 
//   cout << r<<'\n';
}
int main() {
     freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
   ios::sync_with_stdio(false);
   cin.tie(0),cout.tie(0);
   int t;
   cin >> t;
   while(t--) {
    test();
   }
}