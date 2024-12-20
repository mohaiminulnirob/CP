#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=1e5+9;

ll f(ll n, ll k){
    ll ttl;
    if(n>k){
        ttl=(k*(k+1))/2;
        ttl+=k*(k-1)/2;
        ll x=2*k-1;
        ll y=x-n;
        ttl-=(y*(y+1))/2;
    }
    else{
         ttl=(n*(n+1)*1)/2;
    }
    return ttl;
}

int32_t main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

  int t=1;
  cin>>t;
  while(t--)
  {
   ll k,x;
   cin>>k>>x;
   ll l=1, r=2*k-1;
   ll ans=r;
   while(l<=r){
    ll mid=(l+r)/2;
    if(f(mid,k)>=x){
        ans=mid;
        r=mid-1;
    }
    else l=mid+1;
   }
   cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1612/C