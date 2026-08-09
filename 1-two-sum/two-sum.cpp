class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>store;
        vector<int>answer;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];

            
            if (store.find(diff) != store.end()) {
                answer.push_back(store[diff]);
                answer.push_back(i);
            }

        
            store[nums[i]] = i;
        }
                

        return answer;
        }
        
        
    
};