class Solution {
public:
    bool isValid(std::string s) {
        unordered_map<char, char> map = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        stack<char> st;
        for (char c : s) {
            if (map.find(c) == map.end()) {
                st.push(c);
            }
            else if (!st.empty() && map[c] == st.top()) {
                st.pop();
            }
            else
                return false;
        }
        return st.empty();
    }
};