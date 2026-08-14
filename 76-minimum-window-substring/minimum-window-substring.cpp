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

            if (need[s[right]] > 0) {
                count--;
            }

            need[s[right]]--;

            while (count == 0) {

                if (right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    start = left;
                }

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