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
    ll x,m;
    cin>>x>>m;
    int c=0;
    for(int i=1;i<2*x && i<=m;i++){
        int y=i;
        int z=x^y;
        if(z>0 && (x%z==0 || y%z==0))
           c++; 
    }
    cout<<c<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/2039/C1