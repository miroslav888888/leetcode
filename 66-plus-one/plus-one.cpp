class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int i = size-1;
        if (digits[size - 1] != 9) {
            digits[size - 1]++;
            return digits;
        }
        while (digits[i] == 9) {
            digits[i] = 0;
            if (i != 0) i--;
            else break;
        }
        if (digits[i]!=0) digits[i]++;
        else {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};