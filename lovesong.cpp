#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define mod1 pow(10,9)+9
int isprime(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int ispalind(string s){
    ll i,j;
    i=0;
    j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j])
        return 0;
        i++;
        j--;
    }
    return 1;
}
ll gcd(ll a, ll b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
ll power(ll a, ll b, ll md ){
if(b==0)
return 1;
ll res=power(a,b/2,md);
if(b%2)
return( (res%md)*(res)%md*(a)%md);
else
return (res*res)%md;
}
int main(){
ll  i,j,x,y,z,n,m,k,a,b,c,t;
cin>>n>>t;
string s;
cin>>s;
map<char, int>mp;
 
for(i=0;i<s.length();i++){
if(mp.find(s[i])==mp.end()){
mp[s[i]]=(s[i]-'a')+1;
}
}
c=0;
vector<int>dp(n+1,0);
for(i=1;i<=s.length();i++){
    dp[i]=dp[i-1]+mp[s[i-1]];
}
while(t--){
    ll l,r;
    cin>>l>>r;
    cout<<dp[r]-dp[l-1]<<endl;
}

}