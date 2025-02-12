#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=1005;
ll c[N],p[N];
ll dp[100005];
//vector<vector<ll>>dp;
ll n,x;
// ll cal(ll i, ll cost){
// 	if(i>n)
// 		return 0;
// 	if(dp[i][cost]!=-1)
// 		return dp[i][cost];
// 	ll ans=cal(i+1, cost);
// 	if(cost+c[i]<=x)
// 		ans=max(ans,cal(i+1, cost+c[i])+p[i]);
// 	return dp[i][cost]=ans;

// }


int32_t main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

  int t=1;
  //cin>>t;
  while(t--)
  {
   cin>>n>>x;
   //dp.assign(n + 1,vector<ll>(x+1,-1));
   for(int i=1;i<=n;i++){
      cin>>c[i];
   }
   for(int i=1;i<=n;i++)
   	cin>>p[i];

  }
  //cout<<cal(1,0)<<'\n';// won't work because 1e5*1e4==1e9(too large). Must go through iterative way
  memset(dp, 0, sizeof(dp));
    // Bottom-up DP
    for (int i = 1; i <= n; i++) {
        for (int j = x; j >= c[i]; j--) {  // Iterate backwards to avoid overwriting
            dp[j] = max(dp[j], dp[j - c[i]] + p[i]);
        }
    }
    cout<<dp[x]<<'\n';

  return 0;
}
//https://cses.fi/problemset/task/1158
