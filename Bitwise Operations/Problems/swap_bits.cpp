#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
const int N=1e5+9;
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
    int n;
    cin>>n;
    int even=n& 0xAAAAAAAA;
    int odd=n& 0x55555555;
    even>>=1;
    odd<<=1;
    int ans=even|odd;
    cout<<ans<<'\n';
  }
  return 0;
}
//https://www.hackerrank.com/contests/smart-interviews/challenges/si-swap-bits