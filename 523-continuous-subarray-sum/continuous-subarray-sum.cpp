class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>g;
        g[0]=-1;
        int sum=0;
        for(int i=0; i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(g.count(rem)){
                if(i-g[rem]>=2){
                    return true;
                }
            }
                else{
                    g[rem]=i;
                }

            }
        
        
        return false;
    }
};