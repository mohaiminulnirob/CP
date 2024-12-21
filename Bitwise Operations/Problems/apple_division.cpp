#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    ll ans=INT_MAX;
    for(int i=0;i<(1<<n);i++){
      ll sum1=0,sum2=0;
      for(int j=0;j<n;j++){
        if(i&(1<<j)){
          sum1+=a[j];
        }
        else sum2+=a[j];
 
      }
      ans=min(ans,abs(sum1-sum2));
    }
    cout<<ans<<'\n';
  }
  return 0;
}
//https://cses.fi/problemset/task/1623