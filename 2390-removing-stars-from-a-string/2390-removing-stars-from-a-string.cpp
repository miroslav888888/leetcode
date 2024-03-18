class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*') temp.pop_back();
            else temp.push_back(s[i]);
        }
        return temp;
    }
};