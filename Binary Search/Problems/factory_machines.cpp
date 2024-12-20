#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const ll mod=1e18+9;
const int N=2e5+9;
int n;
ll a[N];
ll func(ll t){
  ll sum=0;
  for(int i=1;i<=n;i++){
    sum=sum%mod;
    sum+=(t/a[i]);
  }
 
  return sum;
}
 
int32_t main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
 
  int t=1;
 // cin>>t;
  while(t--)
  {
    ll t;
    cin>>n>>t;
    for(int i=1;i<=n;i++)
      cin>>a[i];
    sort(a,a+n);
    ll l=1,r=1e18,ans=-1;
    while(l<=r){
      ll mid=(l+r)/2;
      if(func(mid)>=t){
        ans=mid;
        r=mid-1;
      }
      else{
        //cout<<func(mid);
        l=mid+1;
 
      }
    }
    cout<<ans<<'\n';
  }
  return 0;
}
//https://cses.fi/problemset/task/1620