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
  cin>>t;
  while(t--)
  {
   int n,k;
   cin>>n>>k;
   map<int,int>m;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    for(int j=0;j<31;j++){
      if((1<<j & x)==0){
        m[j]++;
      }
    }
   }
   ll ans=0;
   for(int j=30;j>=0;j--){
    if(m[j]<=k){
      ans+=1<<j;
      k-=m[j];
    }
   }
   cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/contest/1669/problem/H