class Solution{
    public:
    bool isPowerofTwo(long long n){
       return (__builtin_popcountll(n)==1);
    }
};
