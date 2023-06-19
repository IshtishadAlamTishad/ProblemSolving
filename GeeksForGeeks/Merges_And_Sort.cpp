class Solution{
    public:
    int mergeNsort(int a[], int b[], int n, int m, int ans[])
    {
        set<int> s;
        for(int i=0;i<n;++i) {
            s.insert(a[i]);
        }
        for(int i=0;i<m;++i) {
            s.insert(b[i]);
        }
        
        vector<int> v(s.begin(),s.end());
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();++i) {
            ans[i] = v[i];
        }
        return v.size();
    }
};
