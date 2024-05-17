class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // len = digits.size();
        for (int i = digits.size() - 1; i >= 0; --i) {
            digits[i]++; // Add one to the current digit
            digits[i] %= 10; // If the current digit is 10, wrap around to 0
          
            // If the current digit is not zero, we can return the result
            // since no further carry would be needed
            if (digits[i] != 0) {
                return digits;
            }
        }
        // If we're here, the number was a series of 9's
        // and we need to add an extra digit at the beginning
        digits.insert(digits.begin(), 1);

        return digits;
};