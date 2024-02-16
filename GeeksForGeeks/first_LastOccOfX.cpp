#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    int firstOcc(int a[],int n,int x) {
 		int fo = -1 ;
        int l = 0, r = n-1;
        while ( l <= r ) {
            int mid = ( l + r ) / 2;
            if ( a[mid] == x ) fo = mid;
            if ( a[mid] >= x ) {
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        return fo;
}

int lastOcc(int a[],int n,int x) {
	int l = 0,r = n-1,lo=-1;
        while(l<=r) {
            int mid = ( l + r ) / 2;
            if (a[mid] == x ) lo = mid;
            if (a[mid] <= x ) {
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }
        return lo;
}
    
    vector<int> find(int a[], int n , int x )
    {
        int fo = firstOcc(a,n,x);
        int lo = lastOcc(a,n,x);
        
        return {fo,lo};
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
