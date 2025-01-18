#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int N=105;
int a[N],dp[N][3],n;
int fun(int i, int prev){
  if(i==n)
    return 0;
  if(dp[i][prev]!=-1)
    return dp[i][prev];
  dp[i][prev]=n-i;
  if(prev==0){
    if(a[i]==3)
       dp[i][prev]=min(dp[i][prev],min(fun(i+1,1),fun(i+1,2)));
    else if(a[i]==2)
      dp[i][prev]=min(dp[i][prev],fun(i+1,2));
    else if(a[i]==1)
      dp[i][prev]=min(dp[i][prev],fun(i+1,1));
    else dp[i][prev]=min(dp[i][prev],1+fun(i+1,0));
  }
  else if(prev==1){
    if(a[i]==3)
       dp[i][prev]=min(dp[i][prev],fun(i+1,2));
    else if(a[i]==2)
      dp[i][prev]=min(dp[i][prev],fun(i+1,2));
    else if(a[i]==1 || a[i]==0)
      dp[i][prev]=min(dp[i][prev],1+fun(i+1,0));
  }
  else if(prev==2){
    if(a[i]==3)
       dp[i][prev]=min(dp[i][prev],fun(i+1,1));
    else if(a[i]==2 || a[i]==0)
      dp[i][prev]=min(dp[i][prev],1+fun(i+1,0));
    else if(a[i]==1)
      dp[i][prev]=min(dp[i][prev],fun(i+1,1));
  }
  return dp[i][prev];
}

int32_t main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
  {
    memset(dp,-1,sizeof dp);
   cin>>n;
   for(int i=0;i<n;i++)
    cin>>a[i];
   ll ans=fun(0,0);
   cout<<ans<<'\n';
  }
  return 0;
}