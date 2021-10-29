void solve(string s, int l, int r, vector<string>&ans){
	        if(l==r){
	            ans.push_back(s);
	           
	        }else{
	            for(int i = l;i<=r;i++){
    	            swap(s[i],s[l]);
    	            solve(s, l+1, r, ans);
    	            swap(s[i],s[l]);
	            }
	        }
	        
	        
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>ans;
		    sort(S.begin(), S.end());
		    int n = S.size();
		    solve(S, 0, n-1, ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		    
		}