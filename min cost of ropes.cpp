long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long , vector<long long>, greater<long long>>pq;
        
        long long ans = 0;
        for(int i =0;i<n;i++){
            pq.push(arr[i]);
        }
        
        while(pq.size()>=2){
            long long len = 0;
            len += pq.top();
            pq.pop();
            len += pq.top();
            pq.pop();
            pq.push(len);
            ans += len;
        }
        
        return ans;
    }