#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#define INF 1e18
const int mod=1e9+7;
const int N=2e6+9;
int spf[N];
void sieve() {
  for(int i=2;i<N;i++){
    spf[i]=i;
  }
  for(int i=2;i*i<N;i++){
    if (spf[i] == i) {
      for(int j=i*i;j<N;j+=i) {
        spf[j]=min(spf[j],i);
      }
    }
  }
}

int32_t main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif 
   sieve();
   int t=1;
   cin>>t;
   while(t--)
   {
    int n,m;
    cin>>n>>m;
    if(spf[n]<=m && n!=1)
        cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';

   }
  return 0;
}
//https://codeforces.com/problemset/problem/1826/C