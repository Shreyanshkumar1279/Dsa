class Solution {
public:

    vector<int> runningSum(vector<int>& nums) {
        vector<int> array;
        int add=0;
        
        for(int i =0 ; i<nums.size(); i++){
            if(i==0){
                add=nums[i];
                array.push_back(nums[i]);
            }
            else{
                add=add+nums[i];
                

                array.push_back(add);
        }
    
    }
    return array;
}
};