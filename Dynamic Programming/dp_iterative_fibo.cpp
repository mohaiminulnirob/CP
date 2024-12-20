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
  //cin>>t;
  while(t--)
  {
   int n=10;
   int fibo[n+1];
   fibo[0]=0;
   fibo[1]=1;
   for(int i=2;i<=n;i++){
   	fibo[i]=fibo[i-1]+fibo[i-2];
   }
   cout<<fibo[n]<<'\n';
  }
  return 0;
}