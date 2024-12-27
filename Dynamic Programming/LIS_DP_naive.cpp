#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=2e5+9;

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
   int n;
   cin>>n;
   int dp[n+1]={0};
   int a[n+1];
   for(int i=1;i<=n;i++)
    cin>>a[i];
   for(int i=1;i<=n;i++){
    dp[i]=1;
    for(int j=1;j<i;j++){
        if(a[i]>a[j])
            dp[i]=max(dp[i],dp[j]+1);
    }
   }
   int ans=0;
   for(int i=1;i<=n;i++){
    ans=max(ans,dp[i]);
   }
   cout<<ans;
  }
  return 0;
}
//LIS-> Longest Increasing Subsequence