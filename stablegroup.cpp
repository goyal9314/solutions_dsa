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
cin>>n>>k>>x;
vector<int>v;
for(i=0;i<n;i++){
    cin>>y;
    v.push_back(y);
}
sort(v.begin(),v.end());
vector<int>v1;
int ans=1;
for(i=0;i<n-1;i++){
    if(v[i+1]-v[i]<=x){
        continue;
    }else{
        a=v[i+1]-v[i];
        b=a/x;
        if(v[i]+b*x==v[i+1])
        b--;
        v1.push_back(b);
        
    }
}
sort(v1.begin(),v1.end());
ans=v1.size()+1;
//cout<<v1.size()<<endl;
for(i=0;i<v1.size();i++){
    if(k>=v1[i]){
        ans--;
        k-=v1[i];
    }else{
        break;
    }
}
cout<<ans<<endl;

}