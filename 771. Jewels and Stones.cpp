class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        for (char s : stones) {
            if (jewelSet.count(s)) {
                count++;
            }
        }
        return count;
    }
};