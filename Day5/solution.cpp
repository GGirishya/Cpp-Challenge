class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";

         // use dynamic progamming
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int start = 0, maxLength = 1;
        // Single characters are palindromes
        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
        }

};