public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        string ans="";
        StringBuilder prefix = new StringBuilder();
        if(strs.Length==1) return strs[0];
        for(int i=0; i<strs[0].Length; i++){
            for(int j=0; j<strs.Length; j++){
                if(strs[j].Length<=i) return prefix.ToString();
                if(strs[0][i]==strs[j][i]){
                    if(j==strs.Length-1) prefix.Append(strs[0][i]);
                    else continue;
                }
                else return prefix.ToString();
            }
        }
        return strs[0];
    }
}