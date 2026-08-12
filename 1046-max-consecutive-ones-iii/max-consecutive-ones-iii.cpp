class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0;
        int count2=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count2++;
            }
                while(count2>k){
                    if(nums[count]==0){
                        count2--;
                    }
                    count++;
                }
                ans=max(ans,i-count+1);

            
        
        }
        return ans;
    }
};