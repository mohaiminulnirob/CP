#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const ll mod=1e18+9;
const int N=1e5+9;

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
   ll n,k;
   cin>>n>>k;
   vector<ll>div;
   for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      div.pb(i);
      if(i*i!=n)
        div.pb(n/i);
    }
   }
   sort(div.begin(),div.end());
   // for(auto u:div)
   //   cout<<u<<'\n';
   if(div.size()<k)
     cout<<"-1"<<'\n';
   else 
     cout<<div[k-1]<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/762/A