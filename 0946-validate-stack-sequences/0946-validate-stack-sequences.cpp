class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        vector<int> temp;
        int j = 0;
        for (int i = 0; i < n; i++) {
            temp.push_back(pushed[i]);
            while (popped[j] == temp[temp.size() - 1]) {
                temp.pop_back();
                j++;
                if (temp.size() == 0)
                    break;
            }
        }
        return (temp.size() == 0);
    }
};