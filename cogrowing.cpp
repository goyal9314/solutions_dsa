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
string findbit(ll a){
    ll x=a;
    string s="";
    while(x>0){
        int y=x%2;
        s+=to_string(y);
        x=x/2;
    }
    //reverse(s.begin(),s.end());
    return s;
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
cin>>n;
vector<int>v;
for(i=0;i<n;i++)
{
    cin>>x;
    v.push_back(x);
}
vector<int>v1;
vector<int>v2;
string s="";
for(i=0;i<32;i++){
    s+='0';
}
for(i=0;i<n;i++){
    v1.push_back(0);
}
for(i=1;i<n;i++){
    if( (v[i] & v[i-1])==v[i-1] ){
        continue;
    }
    string s2=findbit(v[i-1]);
    string s3=findbit(v[i]);
    string s1=s;
   j=0;
   //cout<<s2<<"   "<<s3<<"    "<<i<<endl;
    while(j<s2.size()){
        if(s2[j]=='1' && j<s3.size() && s3[j]=='0'){
            s1[j]='1';
        }else if(s2[j]=='1' && j>=s3.size()){
            s1[j]='1';
        }
        
        j++;
    }

    reverse(s2.begin(),s2.end());
    reverse(s3.begin(),s3.end());
    reverse(s1.begin(),s1.end());

    x=0;
    j=s1.size()-1;
    k=0;
    while(j>=0){
        if(s1[j]=='1'){
            x+=pow(2,k);
        }
        j--;
        k++;
    }
    v[i]=v[i]^x;
   // cout<<v[i]<<"   "<<v[i-1]<<endl;
    v1[i]=x;

}
for(i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;


}
}