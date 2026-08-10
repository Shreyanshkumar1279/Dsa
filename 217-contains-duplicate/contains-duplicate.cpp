class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>store;
        for(int x:nums){
            store[x]++;

        }
        for(int i=0; i<nums.size();i++){
            if(store[nums[i]]!=1){
                return true;
            }
        }
        return false;
    }
};