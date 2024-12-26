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
    int n,x,y;
    cin>>n>>x>>y;
    map<pair<int,int>,int>m;
    ll ans=0;
    for(int i=0;i<n;i++){
      int a;
      cin>>a;
      int b=(x-(a%x))%x;
      int c=a%y;
      ans+=m[{b,c}];
      m[{a%x,c}]++;
    }
    cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1931/D