class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int, int> store;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < fruits.size(); right++) {

            store[fruits[right]]++;

            while (store.size() > 2) {

                store[fruits[left]]--;

                if (store[fruits[left]] == 0) {
                    store.erase(fruits[left]);
                }

                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};