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
    ll n,m,k;
    cin>>n>>m>>k;
    if(k>3)
      cout<<"0"<<'\n';
    else if(k==3){
      ll ans=max(m-n-(m/n)+1,0ll);
      cout<<ans<<'\n';
    }
    else if(k==2){
      ll ans=min((m/n)+n-1,m);
      cout<<ans<<'\n';
    }
    else if(k==1){
      cout<<"1"<<'\n';
    }
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1877/C