#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=2e5+9;
ll a[N],c[N],n,h;
bool kill(ll x){
  ll h1=h;
  for(int i=0;i<n;i++){
    h1-=(x/(c[i]))*a[i]%mod;
    if(x%(c[i]))
      h1-=a[i];
  }
  if(h1<=0)
    return true;
  else return false;
}

int32_t main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif 

  int t=1;
  cin>>t;
  while(t--)
  {
    cin>>h>>n;
    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=0;i<n;i++)
      cin>>c[i];
    ll ans=0;
    ll l=1,r=1e11,mid;
    while(l<=r){
      mid=(l+r)/2;
      if(kill(mid)){
        ans=mid;
        r=mid-1;
      }
      else l=mid+1;
    }
    cout<<ans<<'\n';
   
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1985/F