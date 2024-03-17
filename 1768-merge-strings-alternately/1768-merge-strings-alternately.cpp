class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string temp="";
        while(i<word1.size()||i<word2.size()){
            if(i<word1.size()) temp=temp+word1[i];
            if(i<word2.size()) temp=temp+word2[i];
            i++;
        }
        return temp;
    }
};