class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> num_map; 
        for (int i = 0; i < nums.size(); ++i) {
            if (num_map.find(nums[i]) != num_map.end() && i - num_map[nums[i]] <= k) {
                return true;
            }
            num_map[nums[i]] = i; 
        }
        return false;
    }
};
