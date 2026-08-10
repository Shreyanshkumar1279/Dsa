class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int m = 0;
        int t = 0;

        while (l < r) {

            if (height[l] > height[r]) {
                t = min(height[l], height[r]) * (r - l);
                r--;
            }
            else if (height[l] < height[r]) {
                t = min(height[l], height[r]) * (r - l);
                l++;
            }
            else {
                t = min(height[l], height[r]) * (r - l);
                r--;
            }

            if (t > m) {
                m = t;
            }
        }

        return m;
    }
};