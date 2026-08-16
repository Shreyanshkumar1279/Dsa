class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = -1;
        int second = -1;

        // Find first occurrence
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {

            int mid = l + (r - l) / 2;

            if (nums[mid] == target) {
                first = mid;
                r = mid - 1;
            }
            else if (nums[mid] > target) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        // Find last occurrence
        l = 0;
        r = nums.size() - 1;

        while (l <= r) {

            int mid = l + (r - l) / 2;

            if (nums[mid] == target) {
                second = mid;
                l = mid + 1;
            }
            else if (nums[mid] > target) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return {first, second};
    }
};