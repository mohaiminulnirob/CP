#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=2e5+9;
int n;
vector<pair<ll,ll>>pos(N);
bool satisfy(int k){
   ll l=0,r=0;
   for(int i=0;i<n;i++){
      l=max(l-k,pos[i].first);
      r=min(r+k,pos[i].second);
      if(l>r)
         return false;
   }
   return true;
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
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>pos[i].first>>pos[i].second;
   }
   ll l=0,r=1e9;
   ll ans=1e9;
   while(l<=r){
      ll mid=(l+r)/2;
      if(satisfy(mid)){
         ans=mid;
         r=mid-1;
      }
      else l=mid+1;
   }
   cout<<ans<<'\n';
   
  }
  return 0;
}