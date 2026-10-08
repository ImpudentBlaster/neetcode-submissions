class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        unordered_map<int, vector<int>> hash;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        for (auto item : freq) {
            hash[item.second].push_back(item.first);
        }

        for (int i = nums.size(); i >= 1 && result.size() < k; i--) {
            if (hash.count(i)) {
                vector<int>& arr = hash[i];
                for (int j = 0; j < arr.size() && result.size() < k; j++) {
                    result.push_back(arr[j]);
                }
            }
        }

        return result;
    }
};
