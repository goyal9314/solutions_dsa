
#include <bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B);



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        cout<<wordBreak(line, dict)<<"\n";
    }
}
// } Driver Code Ends


//User function template for C++

// A : given string to search
// B : vector of available strings
int dp[1001][1001];
set<string>m;
int solve(string s, int i , int j){
    if(i>j){
        return 0;
    }
    string t = s.substr(i, j-i+1);
    if(m.find(t)!=m.end()){
        return 1;
    }
    
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int temp;
    int ans = 0;
    for(int k = i;k<j;k++){
        // string l = s.substr(s, i, k-i+1);
        // string r = s.substr(s, k+1, j-k);
        int l, r;
        
        l = solve(s, i, k);
        r = solve(s, k+1, j);
        temp = l&r;
        ans = ans | temp;
    }
    return dp[i][j] = ans;
}
int wordBreak(string A, vector<string> &B) {
    memset(dp, -1, sizeof(dp));
    int n = B.size();
    for(int i = 0;i<n;i++){
        m.insert(B[i]);
    }
    int s = A.size();
    return solve(A, 0, s-1);
    
    //code here
}