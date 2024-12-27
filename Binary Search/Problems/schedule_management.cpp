#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define inputa for(int i=0;i<n;i++)cin>>a[i];
#define outputa for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<'\n';
#define all a.begin(),a.end()
#define rall a.rbegin(),a.rend()
#define mii map<int,int>
const int mod=1e9+7;
const int N=2e5+9;
map<int,ll>mp;
int n,m;
bool check(ll t){
    ll done=0;
    for(int i=1;i<=n;i++){
       done+=min(t,mp[i]);
       if(t>mp[i]){
        done+=(t-mp[i])/2;
       }
       if(done>=m)
        return true;
    }
    return false;
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
    mp.clear();
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    ll l=1,r=m;
    ll ans=m;
    while(l<=r){
        ll mid=(l+r)/2;
        if(check(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1701/C