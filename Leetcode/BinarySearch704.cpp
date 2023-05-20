class Solution {
public:
    int search(vector<int>& a, int target) {
        int l=0,r=a.size()-1;
        int ans = -1;
        while(l<=r) {
            int mid = (l+r)/2;
            if(a[mid] == target) {
                ans = mid;
                break;
            } else if(a[mid] < target) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }
        return ans;
    }
};
