class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int max=0;
        int temp=0;
        for(int i=0; i<n; i++){
            temp=temp+gain[i]; 
            if(temp>max){
                max=temp;
            }
            
            
        }
        return max;
    }
};