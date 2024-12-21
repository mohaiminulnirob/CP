#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int32_t main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  //   #endif 

  int t=1;
  cin>>t;
  while(t--)
  {
    unsigned int n;
    cin>>n;
    unsigned int ans=~n;
    cout<<ans<<'\n';
  }
  return 0;
}
//https://www.hackerrank.com/challenges/flipping-bits/problem