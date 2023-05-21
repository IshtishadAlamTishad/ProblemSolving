public class Solution {
    public int Search(int[] nums, int target) {
        int x = Array.BinarySearch(nums,target);
        return (x<0) ? -1 : x;
    }
}
