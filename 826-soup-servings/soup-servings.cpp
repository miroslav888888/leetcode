class Solution {
public:
    double soupServings(int n) {
        if(n>5000) return 1;
        int N = (n + 24) / 25;
        memory.assign(N + 1, vector<double>(N + 1, -1));
        double ans = ServingEachRound(N, N);;
        return ans;
    }
    vector<vector<double>> memory;
    double ServingEachRound(int a, int b) {
        if (a <= 0 && b <= 0) return 0.5;
        if (a <= 0 && b > 0) return 1;
        if(b<=0&&a>0) return 0;
        if (memory[a][b] >= 0) return memory[a][b];
        double result = 0.25 * (ServingEachRound(a - 4, b) + ServingEachRound(a - 3, b - 1) + ServingEachRound(a - 2, b - 2) + ServingEachRound(a - 1, b - 3));
        memory[a][b] = result;
        return result;
    }
};