int dp[101][101];
class Solution {
  public:
  
    int solve(string s, string t, int m , int n){
        if(m==0 && n==0){
            return 0;
        }
        if(m==0){
            return n;
        }
        if(n==0){
            return m;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        if(s[m-1]==t[n-1]){
            return dp[m][n] = solve(s,t,m-1,n-1);
            
        }else{
            return dp[m][n] = min(solve(s,t, m, n-1 )+1,min(solve(s,t,m-1,n-1)+1,solve(s,t,m-1,n)+1));
        }
    }
    int editDistance(string s, string t) {
        // Code here
        memset(dp, -1, sizeof(dp));
        int n = s.size();
        int m = t.size();
        return solve(s,t,n,m);
        //return dp[n][m];
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}