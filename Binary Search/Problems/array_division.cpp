#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const ll mod=1e18+9;
const int N=2e5+9;
int n;
int a[N];
int func(ll t){
  int c=0;
  ll sum=0;
  for(int i=1;i<=n;i++){
    sum+=a[i];
    if(sum>t){
      c++;
      sum=a[i];
    }
   
  }
  return (c+1);
}
 
int32_t main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
 
  int t=1;
 // cin>>t;
  while(t--)
  {
    int k;
    cin>>n>>k;
    //int a[n+1];
    int m=0;
    for(int i=1;i<=n;i++){
      cin>>a[i];
      m=max(m,a[i]);
    }
    //sort(a+1,a+1+n);
    ll l=m,r=2e15,ans=0;
    while(l<=r){
      ll mid=(l+r)/2;
      if((func(mid))<=k){
        ans=mid;
        r=mid-1;
      }
      else l=mid+1;
    }
    cout<<ans<<'\n';
  }
  return 0;
}
//https://cses.fi/problemset/task/1085