class Solution {
public:
    
    vector<int> getPascalRow(vector<int> row){
        vector<int> retval(row.size() + 1);
        retval[0] = 1;
        retval[retval.size() - 1] = 1;
        int count = 1;
        for(int i = 0; i < row.size() -1; ++i){
            retval[count] = row[i] + row[i+1];
            count = count + 1;
        }
        return retval;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> retval;
        int count = 0;
        vector<int> currRow;
        while(count < numRows){
            if(count == 0){
                currRow.insert(currRow.begin(), 1);
            } else {
                currRow = getPascalRow(currRow);
            }
            retval.insert(retval.end(),currRow);
            count = count + 1;
        }
        return retval;
    }
};