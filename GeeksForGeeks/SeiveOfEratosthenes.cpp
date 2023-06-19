class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        vector<int> prime(n+1,true),r;
        for(int i=2;i<=n;++i) {
            if(prime[i]) {
                r.push_back(i);
                for(int j=i*i;j<=n;j+=i) {
                    prime[j] = false;
                }
            }
        }
        return r;
    }
};
