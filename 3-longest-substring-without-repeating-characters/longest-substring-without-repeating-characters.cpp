class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> store;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++) {

            while (store.find(s[right]) != store.end()) {
                store.erase(s[left]);
                left++;
            }

            store.insert(s[right]);

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};