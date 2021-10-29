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
    cout<<endl;
    int r1,r2,r3,c1,c2,c3;
    cin>>c1>>r1;
    cin>>c2>>r2;
    cin>>c3>>r3;
    if(r1==r2 && r1==r3 ){
        if( (c3>c1 && c3<c2) || (c3>c2 && c3<c1) )
        cout<<abs(c1-c2)+2<<endl;
        else
        cout<<abs(c1-c2)<<endl;
        continue;
    }
    if(c1==c2 && c1==c3){
        if( (r3>r1 && r3<r2) || (r3>r2 && r3<r1) )
        cout<<abs(r1-r2)+2<<endl;
        else
        cout<<abs(r1-r2)<<endl;
        continue;
    }
    x=abs(r1-r2)+abs(c1-c2);
    cout<<x<<endl;

}
}