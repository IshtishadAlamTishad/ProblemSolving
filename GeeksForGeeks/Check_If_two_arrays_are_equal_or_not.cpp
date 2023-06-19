class Solution{
    public:
    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        bool ok = true;
        for(int i=0;i<N;++i) {
            if(A[i] != B[i]) {
                ok = false;
            }
        }
        return ok;
    }
};
