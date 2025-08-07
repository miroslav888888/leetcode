class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        for (int i = 1; i <= numRows; i++) {
            temp = generateonevector(temp);
            ans.push_back(temp);
        }
        return ans;
    }
    vector<int> generateonevector(vector<int> last) {
        vector<int> temp;
        for (int i = 0; i <= last.size(); i++) {
            if (i == 0 || i == last.size()) temp.push_back(1);
            else temp.push_back(last[i - 1] + last[i]);
        }
        return temp;
    }
};