#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=2e5+9;
vector<map<int,int>>v(N);
int n;
bool check(ll l,ll x,ll k){
   ll sum=0;
    for(int i=0;i<32;i++){
      if(v[x][i]-v[l-1][i]==x-l+1){
         sum+=1<<i;
      }
    }
    //cout<<sum<<'\n';
    if(sum>=k)
      return true;
   return false;
}

int32_t main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

  int t=1;
  cin>>t;
  while(t--)
  {
   cin>>n;
   for (int i=0;i<=n;i++){
    v[i].clear();
   }
   for(int i=1;i<=n;i++){
      int x;
      cin>>x;
      for(int j=0;j<32;j++){
         if((1<<j)&x)
            v[i][j]++;
         v[i][j]+=v[i-1][j];
      }
   }
   int q;
   cin>>q;
   while(q--){
      ll left,k;
      cin>>left>>k;
      ll l=left,r=n;
      ll ans=-1;
      while(l<=r){
         ll mid=(l+r)/2;
         if(check(left,mid,k)){
            ans=mid;
            l=mid+1;
         }
         else r=mid-1;
      }
      cout<<ans<<" ";
   }
   
   cout<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1878/E