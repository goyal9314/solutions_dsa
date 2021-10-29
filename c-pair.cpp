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
cin>>t;
while(t--){
  cin>>k>>n>>m;
  vector<ll>v;
  vector<ll>v1;
  vector<ll>v2;
  for(i=0;i<n;i++){
      cin>>x;
      v.push_back(x);
  }
  for(i=0;i<m;i++){
      cin>>x;
      v1.push_back(x);
  }
  int flag=0;
  i=0;
  j=0;
  z=0;
  while(i<n || j<m){
      z=0;
      if(i<n && v[i]==0){
          k++;
          v2.push_back(v[i]);
          i++;
      }
      else if(j<m && v1[j]==0 ){
          y++;
          k++;
          v2.push_back(v1[j]);
          j++; 
      }
      else if(i<n && v[i]<=k){
          v2.push_back(v[i]);
          i++;
      }
      else if(j<m && v1[j]<=k ){
          v2.push_back(v1[j]);
          j++;
      }else {
          flag=1;
          break;
      }
  }
  if(flag){
      cout<<-1<<endl;
      continue;
  }
  for(i=0;i<v2.size();i++){
      cout<<v2[i]<<" ";
  }
  cout<<endl;

}
}