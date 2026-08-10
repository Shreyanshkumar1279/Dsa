class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> store;

for(int x : nums) {
    if(store.count(x)) {
        return true;
    }

    store.insert(x);
}

return false;
    }
};