class Solution {
public:

    bool includes(unordered_map<char,int>& freq1,
                  unordered_map<char,int>& freq2) {

        for (auto& kv : freq2) {

            if (freq1[kv.first] < kv.second) {
                return false;
            }

        }

        return true;
    }

    string minWindow(string s, string t) {

        if (t.size() > s.size()) {
            return "";
        }

        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;

        for (char c : t) {
            freq2[c]++;
        }

        int l = 0;

        int minLength = INT_MAX;
        int start = 0;

        for (int r = 0; r < s.size(); r++) {

            freq1[s[r]]++;

            while (includes(freq1, freq2)) {

                // Current window valid hai
                // Pehle answer check karo
                if (r - l + 1 < minLength) {
                    minLength = r - l + 1;
                    start = l;
                }

                // Ab window shrink karo
                freq1[s[l]]--;
                l++;
            }
        }

        if (minLength == INT_MAX) {
            return "";
        }

        return s.substr(start, minLength);
    }
};