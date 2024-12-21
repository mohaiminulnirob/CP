#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
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
    int ans=1;
    for(int i=0;i<n;i++){
      ans=(ans*2)%mod;
    }
    cout<<ans<<'\n';
 
  }
  return 0;
}
//https://cses.fi/problemset/task/1617