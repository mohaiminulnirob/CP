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
   int n,m;
   cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++)
   	cin>>a[i];
   sort(a,a+n);
   while(m--){
   	ll x,ans=0;
   	cin>>x;
   	ll l=1,r=n;
   	while(l<=r){
   		ll mid=(l+r)/2;
   		if(a[mid-1]>x)
   			r=mid-1;
   		else{
            ans=mid;
            l=mid+1;
   		}
   	}
   	cout<<ans<<" ";
   }
   cout<<'\n';
  }
  return 0;
}
//https://codeforces.com/contest/600/problem/B