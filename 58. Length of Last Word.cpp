class Solution {
public:
    int lengthOfLastWord(string s) {
    istringstream iss(s);
    string word;
    vector<string> words;

    while (iss >> word) {
        words.push_back(word);
    }
    string last = words.back();
    return last.size(); 
    }
};
// coverter the string into vector then just simply returned the size of last value of vector 