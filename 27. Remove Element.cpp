class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> :: iterator it;
        for(it= nums.begin(); it!= nums.end(); it++){
            int ele = *it;
            if(ele == val){
                nums.erase(it);
                it--;
            }
        }
        return nums.size();    
    }
};
//simply used itterator and deleted elements in array
