
class Solution {
public:
    string convert(string s, int numRows) {
        // If the number of rows is 1, return the original string
        if (numRows == 1) return s;

        // Create a vector of strings for each row
        vector<string> rows(min(numRows, int(s.length())));
        
        int currentRow = 0;
        bool goingDown = false;
        // Traverse the string and place characters in the correct row
        for (char c : s) {
            rows[currentRow] += c;
            // Change direction when you reach the top or bottom row
            if (currentRow == 0 || currentRow == numRows - 1) goingDown = !goingDown;
            currentRow += goingDown ? 1 : -1;
        }

        // Combine all rows into one string
        string result;
        for (string row : rows) {
            result += row;
        }



};


