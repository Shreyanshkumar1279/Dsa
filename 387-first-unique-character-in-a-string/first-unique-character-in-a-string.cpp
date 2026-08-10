class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int>store;
        for(int j:s){
            store[j]++;
        }
        int x=0;
        
        int key=0;
        for(int i=0; i<s.size();i++){
        if(store[s[i]]==1){
        return i;
        
        }
        }
    return -1;
}
};