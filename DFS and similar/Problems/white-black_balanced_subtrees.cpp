#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=1e5+9;
map<int,pair<int,int>>c;
map<int,vector<int>>a;
int vis[N];
string s;

pair<int,int> dfs(int start){
    vis[start]=1;
    if(a[start].size()==0){
        if(s[start-1]=='W')
            return c[start]={1,0};
        else return c[start]={0,1};
    }
    if(s[start-1]=='W')
        c[start].first=1;
    else c[start].second=1;

    for(auto u:a[start]){
        if(!vis[u]){
            pair<int,int>pi=dfs(u);
            c[start].first+=pi.first;
            c[start].second+=pi.second;
        }

    }
    return c[start];
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
   c.clear();
   memset(vis,0,sizeof(vis));
   a.clear();
   int n;
   cin>>n;
   for(int i=2;i<=n;i++){
    int x;
    cin>>x;
    a[x].pb(i);
   } 
   cin>>s;
   dfs(1);
   int ans=0;
   for(int i=1;i<=n;i++){
    if(c[i].first && c[i].second && c[i].first==c[i].second){
        //cout<<i<<'\n';
        ans++;
    }
   }
   cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1676/G