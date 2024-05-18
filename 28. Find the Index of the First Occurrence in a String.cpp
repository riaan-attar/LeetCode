class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())
            return -1;
        int m=haystack.size(),n=needle.size();
        for(int i = 0; i<m-n+1; i++){
            string s = haystack.substr(i,n);
            if (s==needle)
                return i;
        }
        return -1;
    }
};
// Easiest approach which beats 100% of C++ Solution