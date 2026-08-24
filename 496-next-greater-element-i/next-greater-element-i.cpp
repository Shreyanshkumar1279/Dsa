class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;

        // nums2 ko right se traverse karenge
        for (int i = nums2.size() - 1; i >= 0; i--) {

            // Jo current se chhote/equal hain,
            // wo next greater nahi ho sakte
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            // Stack empty → koi greater element nahi
            if (st.empty())
                mp[nums2[i]] = -1;
            else
                mp[nums2[i]] = st.top();

            // Current ko future elements ke candidate ke roop mein rakho
            st.push(nums2[i]);
        }

        vector<int> ans;

        for (int x : nums1) {
            ans.push_back(mp[x]);
        }

        return ans;
    }
};