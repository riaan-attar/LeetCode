class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxarea = 0;

        while (left < right) {
            int length = std::min(height[left], height[right]);
            int breadth = right - left;
            int area = length * breadth;
            maxarea = std::max(maxarea, area);

            // Move the pointer pointing to the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxarea;
    }
};