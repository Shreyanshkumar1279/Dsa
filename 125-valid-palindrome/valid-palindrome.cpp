class Solution {
public:
    bool isPalindrome(string s) {

        for(int j = 0; j < s.size(); j++) {
            if(s[j] >= 'A' && s[j] <= 'Z') {
                s[j] = s[j] + 32;
            }
        }

        int i = 0;
        while(i < s.size()) {
            if(!isalnum(s[i])) {
                s.erase(i, 1);
            }
            else {
                i++;
            }
        }

        string b = s;

        int y = 0;
        int m = s.size() - 1;

        while(y < m) {
            swap(s[y], s[m]);
            y++;
            m--;
        }

        if(s == b) {
            return true;
        }

        return false;
    }
};