class Solution {
    public:
        int minimumDeletions(vector<int>& nums) {
            //setting min and max to first ele of array
            if(nums.size() == 1) return 1;
            int mini = nums[0];
            int maxi = nums[0];
            int min_location = 0, max_location = 0;
    
            for(int i=0; i<nums.size() ; i++){
                //finding the min and updating its location
                if(nums[i] < mini){
                    mini = nums[i];
                    min_location = i;
                }
                if(nums[i] > maxi){
                    maxi = nums[i];
                    max_location = i;
                }
            }
    
    //         We will store index of min and max element in i and j variable (where j always points to the greater index).
    // For case 1: no of elements to be deleted from start = j+1
    // For case 2: no of elements to be deleted from end = n - i
    // For case 3: no of elements to be deleted from both = (i+1) + (n-j)
            int i,j;
            if(max_location>min_location){
                i = min_location;
                j = max_location;
            }
            else{
                i = max_location;
                j = min_location;
            }
            int first,second,third;
            first = j+1;
            second = nums.size() - i;
            third = (i+1) + (nums.size()-j);
            return min(min(first,second),third);
        }
    };