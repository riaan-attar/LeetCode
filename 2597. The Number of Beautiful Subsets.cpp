class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int count = 0;
        vector<int> current;
        backtrack(nums, k, 0, current, count);
        return count;
    }

private:
    void backtrack(vector<int>& nums, int k, int start, vector<int>& current, int& count) {
        if (!current.empty()) {
            count++;
        }
        
        for (int i = start; i < nums.size(); i++) {
            bool valid = true;
            for (int j = 0; j < current.size(); j++) {
                if (abs(nums[i] - current[j]) == k) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                current.push_back(nums[i]);
                backtrack(nums, k, i + 1, current, count);
                current.pop_back();
            }
        }
    }
};