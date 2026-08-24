class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>j;
        vector<int>ans(n,-1);
        for(int i=2*n-1; i>=0; i--){
            int curr=i%n;
            while(!j.empty()&&j.top()<=nums[curr]){
                j.pop();
            }
            if(curr<n && !j.empty()){
                ans[curr]=j.top();
            }
            j.push(nums[curr]);
        }
        return ans;
    }
};