class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if (numRows == 0) {
            return result;
        }

        // The first row is always [1]
        result.push_back({1});

        for (int i = 1; i < numRows; ++i) {
            vector<int> prevRow = result.back();
            vector<int> newRow;
            newRow.push_back(1); // First element is always 1

            for (int j = 1; j < prevRow.size(); ++j) {
                // Each element is the sum of the two elements above it
                newRow.push_back(prevRow[j - 1] + prevRow[j]);
            }
            
            newRow.push_back(1); // Last element is always 1
            result.push_back(newRow);
        }

        return result;
    }
};
