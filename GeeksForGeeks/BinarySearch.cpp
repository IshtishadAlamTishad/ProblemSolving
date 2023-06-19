class Solution {
  public:
    int binarysearch(int a[], int n, int k) {
        int l=0,r=n-1,ans=0;
        while(l<=r) {
            int mid = (l+r)/2;
            
            if(a[mid]==k) {
                return mid;
            }
            else if(a[mid] < k) {
                l = mid+1;
            } else {
                r=mid-1;
            }
        }
        return -1;
    }
};
