class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        int left= 0;
        int right= 0;
        for (int i=0; i<nums.size(); i++){
            total= total+ nums[i];
        
        }
        
        for (int i=0; i<nums.size(); i++){
            if(i==0){
                left=0;
            }
            else{
    
            left=left+ nums[i-1];
            }
            right=total-(left+nums[i]);
            
            if(left==right){
                return i;
            }        
        
        
        }
        return -1;
        
    }
};