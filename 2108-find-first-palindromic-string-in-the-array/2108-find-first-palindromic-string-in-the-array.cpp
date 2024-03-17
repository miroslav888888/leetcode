class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();++i){
            bool temp=1;
            for(int j=0;j<words[i].size();++j){
                if(words[i][j]!=words[i][words[i].size()-1-j]){
                    temp=0;
                    break;
                }
            }
            if(temp==1){
                ans=words[i];
                break;
            }  
        }
        return ans;
    }
};