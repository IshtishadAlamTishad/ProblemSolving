class Solution{
    public:
    int searchInSorted(int a[], int n, int k) { 
      int s=0,e=n-1;
      while(s<=e) {
    	int mid = (s+e)/2;
    	if(a[mid]==k) return 1;
    	else if(a[mid] < k) s = mid+1;
    	else if(a[mid] > k) e = mid-1;
  }
  return -1;
    }
};
