#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const ll mod=1e18+9;
const int N=1e5+9;
int n;
int a[N];
ll func(int val){
  ll sum=0;
  for(int i=1;i<=n;i++){
    if(a[i]>val)
      return 0;
    sum+=val-a[i];
  }
  return sum;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

  int t=1;
  //cin>>t;
  while(t--)
  {
    cin>>n;
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    ll l=1,r=2e9,ans=0;
    while(l<=r){
      ll mid=(l+r)/2;
      if(func(mid)>=mid){
        ans=mid;
        r=mid-1;
      }
      else l=mid+1;
    }
    cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/348/A