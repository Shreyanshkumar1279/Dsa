class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        for(int i=0; left<right;i++){
            swap(s[left],s[right]);
            left++;
            right--;
            
        }
    
    }
};