class Solution {
public:
    double findMedianSortedArrays(vector<int>& list1, vector<int>& list2) {
        int i = 0, j = 0;
        vector<int> mergedList;

        // Merging the two sorted arrays
        while (i < list1.size() && j < list2.size()) {
            if (list1[i] <= list2[j]) {
                mergedList.push_back(list1[i]);
                i++;
            } else {
                mergedList.push_back(list2[j]);
                j++;
            }
        }

        // Append remaining elements of list1,
        while (i < list1.size()) {
            mergedList.push_back(list1[i]);
            i++;
        }

        // Append remaining elements of list2,
        while (j < list2.size()) {
            mergedList.push_back(list2[j]);
            j++;
        }

        int totalSize = mergedList.size();
        int mid = totalSize / 2;
        if (totalSize % 2 == 0) {
            return (mergedList[mid - 1] + mergedList[mid]) / 2.0;
        } else {
            return mergedList[mid];
        }
    }
};