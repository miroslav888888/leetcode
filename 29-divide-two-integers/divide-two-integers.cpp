class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (dividend == INT_MAX && divisor == -1) return INT_MIN+1;
        if (divisor == 1) return dividend;
        int f1 = dividend >= 0 ? 1 : -1;
        int f2 = divisor >= 0 ? 1 : -1;
        int count = 0;
        if ((f1 >= 0 && f2 >= 0) || (f1 <= 0 && f2 <= 0)) {
            while (abs((long long)dividend) >= abs((long long)divisor)) {
                dividend -= divisor;
                count++;
            }
            return count;
        }
        else {
            while (abs((long long)dividend) >= abs((long long)divisor)) {
                dividend += divisor;
                count++;
            }
            return 0 - count;
        }
    }
};