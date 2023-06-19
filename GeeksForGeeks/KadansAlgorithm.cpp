class Solution{
    public:
    long long maxSubarraySum(int a[], int n){
    long long sum=0,max=a[0];
	    for(int i=0;i<n;++i) {
		    if(sum<0) sum=0; 
		    sum+=a[i];
		    if(max<sum) max=sum;
	      }
	      return max;
    }
};
