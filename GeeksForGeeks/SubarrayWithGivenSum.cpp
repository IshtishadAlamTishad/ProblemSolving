class Solution
{
    public:
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int i = 0, j = 0;
        long long sum = arr[i];
        while(j<n) {
            if(sum == s) return {i+1, j+1};
            if(sum < s) {
                j++;
                sum += arr[j];
            } else if(sum > s) {
                sum -= arr[i];
                i++;
            }
            // left>right
            if(j<i) {
                j = i;
                sum = arr[i];
            }
        }
        return {-1};
    }
};
