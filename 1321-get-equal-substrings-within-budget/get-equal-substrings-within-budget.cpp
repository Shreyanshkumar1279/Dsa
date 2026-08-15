class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l = 0;
        int current_cost = 0;
        int max_len = 0;

        for (int r = 0; r < s.length(); r++) {
            // Add the absolute cost of the current character to the window
            current_cost += abs(s[r] - t[r]);

            // If the window cost exceeds maxCost, shrink from the left
            while (current_cost > maxCost) {
                current_cost -= abs(s[l] - t[l]);
                l++;
            }

            // Update the maximum length found so far
            max_len = max(max_len, r - l + 1);
        }

        return max_len;
    }
};