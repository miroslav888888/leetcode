public class Solution {
    public int RomanToInt(string s) {
        int sum = 0;

        for (int i = 0; i < s.Length; i++) {
            if (i + 1 < s.Length && GetValue(s[i]) < GetValue(s[i + 1])) {
                sum -= GetValue(s[i]); 
            } else {
                sum += GetValue(s[i]);
            }
        }

        return sum;
    }

    private int GetValue(char c) {
        switch (c) {
            case 'M': return 1000;
            case 'D': return 500;
            case 'C': return 100;
            case 'L': return 50;
            case 'X': return 10;
            case 'V': return 5;
            case 'I': return 1;
            default: return 0; 
        }
    }
}