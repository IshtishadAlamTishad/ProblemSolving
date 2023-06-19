class Solution {
  public:
    int kThSmallestFactor(int n, int k) {
        int a[n];
        int i=1;
        for(i;i*i<n;++i)
        {
            if(n%i==0)
            {
                a[i] = i;
                k--;
                if(k==0) return i;
            }
        }
        if(i-(n/i)==1) i--;
        for(;i>=1;i--)
        {
            if(n%i==0)
            {
                k--;
                if(k==0) return n/i;
            }
        }
        return -1;
    }
};
