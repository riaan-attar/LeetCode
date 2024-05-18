class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=-1, length=0;
        vector<int> dict(256,-1);
        for(int i=0; i<s.size(); i++){
            if(dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            length = max(length,i-start);        
        }
        return length;
    }
};