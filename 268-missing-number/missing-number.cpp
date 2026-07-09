class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k;
        int n= nums.size();
        for(int i=0; i<=nums.size();i++){
            auto j=find(nums.begin(),nums.end(),i);
            if(j==nums.end()){
                k=i;
            }
        }
        return k;
        
    }
};