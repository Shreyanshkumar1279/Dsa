class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        stack<int>t;
        for(int i=nums2.size()-1; i>=0; i--){
        while(!t.empty()&&t.top()<=nums2[i]){
            t.pop();

        }
        if(t.empty()){
            m[nums2[i]]=-1;

        }
        else{
            m[nums2[i]]=t.top();

        }
        t.push(nums2[i]);
        }
        vector<int>j;
        for(int x:nums1){
            j.push_back(m[x]);

        }
        return j;
}
};