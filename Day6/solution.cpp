
class Solution {
public:
    string convert(string s, int numRows) {
        // If the number of rows is 1, return the original string
        if (numRows == 1) return s;

        // Create a vector of strings for each row
        vector<string> rows(min(numRows, int(s.length())));
        
        int currentRow = 0;
        bool goingDown = false;

};


