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
   int n;
   cin>>n;
   bool f=true;
   for(int i=2;i<=sqrt(n);i++){
      if(n%i==0){
         int ans1=max(i,n/i);
         int ans2=n-ans1;
         cout<<ans1<<" "<<ans2<<'\n';
         f=false;
         break;
      }
   }
   if(f){
      cout<<"1"<<" "<<n-1<<'\n';
   }
   
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1372/B