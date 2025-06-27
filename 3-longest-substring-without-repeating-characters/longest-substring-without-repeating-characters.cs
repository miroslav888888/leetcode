public class Solution {
    public int LengthOfLongestSubstring(string s) {
        int longest=0;
        int start=0;
        HashSet<char> seen = new HashSet<char>();
        for(int end=0;end<s.Length;end++){
            while(seen.Contains(s[end])){
                seen.Remove(s[start]);
                start++;
            }
            seen.Add(s[end]);
            longest=longest>end-start+1? longest:end-start+1;
        }
        return longest;
    }
}