class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        int n = v.size();
        int ma = 0;
        for(int i = 0;i<n;i++){;
            int m =v[i].length();
            ma = max(ma, m);
        }
        int j = 0;
        string ans= "";
        while(j<ma){
            int k = n;
            char c = v[0][j];
            for(int i = 0;i<n;i++){
                if(v[i][j]==c)k--;
            }
            if(k==0){
                ans += c;
                j++;
            }else{
                break;
            }
        }
        return ans;
    }
};