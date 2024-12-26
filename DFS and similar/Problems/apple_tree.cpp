#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#define INF 1e18
const int mod=1e9+7;
const int N=2e5+9;
vector<int>a[N];
int cnt[N];
int vis[N];
int dfs(int start,int parent)
{
    if(start!=1 && a[start].size()==1)
      cnt[start]=1;
    for(auto child: a[start])
    {
        if(child!=parent)
        {
           cnt[start]+=dfs(child,start);
        }
    }
    return cnt[start];
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
    for(int i=0;i<N;i++)
      a[i].clear();
    memset(cnt,0,sizeof(cnt));
    memset(vis,0,sizeof(vis));
    int m;
    cin>>m;
    for(int i=0;i<m-1;i++){
      int x,y;
      cin>>x>>y;
      // if(x<y){
      //   a[x].pb(y);
      // }
      // else a[y].pb(x);
      a[x].pb(y);
      a[y].pb(x);
    }
    dfs(1,-1);
    int q;
    cin>>q;
    while(q--){
      int x,y;
      cin>>x>>y;
      ll ans=1ll*cnt[x]*cnt[y];
      cout<<ans<<'\n';
    }

  }
  return 0;
}
//https://codeforces.com/problemset/problem/1843/D