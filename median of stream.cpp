#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    priority_queue<int>p;
    priority_queue<int, vector<int>, greater<int>>q;
    void insertHeap(int &x)
    {
        if(p.empty()){
            p.push(x);
        }else{
            if(x<=p.top()){
                p.push(x);
            }else{
                q.push(x);
            }
            balanceHeaps();
        }
        
    }
    void balanceHeaps()
    {
        int n = p.size();
        int m = q.size();
        if((n+m)%2==0){
            if(n>m){
                q.push(p.top());
                p.pop();
            }else if(n<m){
                p.push(q.top());
                q.pop();
            }
        }else{
            if(n<m){
                p.push(q.top());
                q.pop();
            }
        }
    }
    
    double getMedian()
    {
        int n = p.size();
        int m = q.size();
        double ans;
        if((n+m)%2==0){
            ans = (p.top() + q.top())/2.0;
        }else{
            ans = p.top();
        }
        return ans;
    }
};


int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}