class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int totalSize = m + n;
        int midIndex = totalSize / 2;
        int i = 0, j = 0;
        int current, previous;
        
        // Traverse through both arrays until we reach the middle of the combined sorted array
        for (int k = 0; k <= midIndex; k++) {
            previous = current;
            if (i < m && (j >= n || nums1[i] < nums2[j])) {
                current = nums1[i++];
            } else {
                current = nums2[j++];
            }
        }
        
        // If the combined array has an odd number of elements, return the middle one
        if (totalSize % 2 == 1) {
            return current;
        } 
        // If even, return the average of the two middle elements
        else {
            return (previous + current) / 2.0;
        }
    }
};
