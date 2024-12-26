#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#define INF 1e18
const int mod=1e9+7;
const int N=2e5+9;
map<int,int>m;
void pf(int n){
  int i=2;
  while(i*i<=n){
    while(n%i==0){
      m[i]++;
      n/=i;
    }
    i++;
  }
  if(n>1)
    m[n]++;
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
    int n;
    cin>>n;
    int a[n];
    m.clear();
    for(int i=0;i<n;i++){
      cin>>a[i];
      pf(a[i]);
    }
    bool ans=true;
    for(auto u:m){
      if((u.second%n)!=0){
        ans=false;
        break;
      }
    }
    if(ans)
      cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1881/D