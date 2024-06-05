vector<int>dp(1001, -1);
class Solution {
public:
    int min_cost(vector<int>& cost, int n){
        if(dp[n] != -1 ) return dp[n];
        if(n<=1) return dp[n] = 0;
        if(n==2) return min(cost[0], cost[1]);
        return dp[n] = min(min_cost(cost , n-1) + cost[n-1],
                   min_cost(cost , n-2) + cost[n-2]);
        }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        fill(dp.begin(), dp.end(),-1);
        return min_cost(cost ,n);
    }
};