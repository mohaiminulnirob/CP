#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=2e5+9;
int32_t main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif 

  int t=1;
  cin>>t;
  while(t--)
  {
   ll n,x,ans=0;
   cin>>n>>x;
   for(int i=1;i<x-1;i++){
     for(int j=1;j<n/i;j++){
      ll k=min(x-i-j,(n-i*j)/(i+j));
      ans+=max(k,0ll);
     }
   }
   cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1996/D