
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int n = nums.size();

        // Check each pair of numbers
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // If the pair sums up to the target, return their indices
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        // If no solution is found (though the problem assumes one solution exists)
        return {};
    }
};
