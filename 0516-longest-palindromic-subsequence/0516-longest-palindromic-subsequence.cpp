class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        string t=s;
        reverse(s.begin(),s.end());
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;j++){
                int match=0;
                int nomatch=0;
                if(s[i-1]==t[j-1]) match=1+dp[i-1][j-1];
                nomatch=max(dp[i-1][j],dp[i][j-1]);
                dp[i][j]=max(match,nomatch);
            }
        }
        return dp[n][n];
    }
};