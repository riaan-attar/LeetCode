class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> main;
        vector<int> :: iterator i;
        for(i= nums.begin(); i!= nums.end(); i++){
            int ele = *i;
            if( find(main.begin(), main.end(), ele) != main.end()){
                nums.erase(i);
                i--;
            }
            else{
                main.push_back(*i);
            }
        }
        return nums.size();
    }
};