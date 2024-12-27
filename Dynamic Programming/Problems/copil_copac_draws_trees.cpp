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
vpii adj[N];
int dp[N];
int id[N];
void dfs(int u){
    for(auto v:adj[u]){
        if(dp[v.F]==0){
           dp[v.F]=dp[u]+(v.S<id[u]);
           id[v.F]=v.S;
           dfs(v.F);
        }
    }
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
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
    dp[i]=id[i]=0;
    adj[i].clear();
   }
   for(int i=1;i<n;i++){
    int x,y;
    cin>>x>>y;
    adj[x].pb({y,i});
    adj[y].pb({x,i});
   }
   dp[1]=1;
   dfs(1);
   int ans=1;
   for(int i=1;i<=n;i++){
    ans=max(ans,dp[i]);
   }
   cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/contest/1830/problem/A