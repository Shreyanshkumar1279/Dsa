class Solution {
public:

    vector<int> runningSum(vector<int>& nums) {
        vector<int> array;
        
        for(int i =0 ; i<nums.size(); i++){
            int add=0;
            for(int j=0 ; j<=i; j++){
                add=add+nums[j];
            }
            array.push_back(add);
        }
        return array;
    }
};