class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0; i<k; i++){
              sum=sum+nums[i];
        }
        double max=sum;
        int z=0;
        for(int j=k; j<nums.size(); j++){
            sum=sum+nums[j]-nums[z];
            z++;
            if(sum>max){
                max=sum;
            }
        }
        double d=0;
        d= max/k;
        return d;
    }
};