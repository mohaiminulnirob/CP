#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int32_t main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int t=1;
  cin>>t;
  while(t--)
  {
   ll n,m;
   cin>>n>>m;
   ll ans=0;
   for(int i=1;i<=m;i++){
      ans+=(n+i)/(1ll*i*i);
   }
   ans-=1;
   cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1967/B1