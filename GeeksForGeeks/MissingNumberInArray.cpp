class Solution{
  public:
    int MissingNumber(vector<int>&a, int n) {
       int x = (n*(n+1))/2;
       int sum=0;
       for(int i=0;i<a.size();++i) {
           sum+=a[i];
       }
       return x-sum;
    }
};
