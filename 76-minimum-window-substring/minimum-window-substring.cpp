class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> need(128, 0);

        for (char c : t) {
            need[c]++;
        }

        int left = 0;
        int count = t.size();

        int minLength = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {

            // Current character required hai
            if (need[s[right]] > 0) {
                count--;
            }

            need[s[right]]--;

            // Window valid ho gayi
            while (count == 0) {

                // Minimum window update
                if (right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    start = left;
                }

                // Left character remove karo
                need[s[left]]++;

                if (need[s[left]] > 0) {
                    count++;
                }

                left++;
            }
        }

        if (minLength == INT_MAX) {
            return "";
        }

        return s.substr(start, minLength);
    }
};