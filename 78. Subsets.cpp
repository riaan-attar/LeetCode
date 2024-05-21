class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = {vector<int>()};
        
        for(int num : nums){
            int ans_size = ans.size();
            for(int i = 0; i < ans_size; i++){
                vector<int> cur = ans[i];
                cur.push_back(num);
                ans.push_back(cur);
            }
        }
        
        return ans;
    }
};
// recurssion algorithm simple and elegant
