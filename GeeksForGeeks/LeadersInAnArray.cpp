class Solution{
    public:
    vector<int> leaders(int a[], int n){
      int mx = a[n-1];
      vector<int>ans;
      ans.push_back(a[n-1]);
      
      for(int i=n-2;i>=0;--i) {
          if(mx<=a[i]) {
              ans.push_back(a[i]);
              mx = a[i];
          }
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};
