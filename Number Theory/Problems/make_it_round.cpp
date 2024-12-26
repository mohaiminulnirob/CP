#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define inputa for(int i=0;i<n;i++)cin>>a[i];
#define outputa for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<'\n';
#define all a.begin(),a.end()
#define rall a.rbegin(),a.rend()
#define mii map<int,int>
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
   ll n,m;
   cin>>n>>m;
   int a=n;
   while(n%10==0){
   	n/=10;
   }
   ll m1=1;
   while(n%5==0){
   	if(m1*2<=m){
   	  n/=5;
      m1*=2;
   	}
   	else break;
   }
   while(n%2==0){
   	if(m1*5<=m){
   		n/=2;
   		m1*=5;
   	}
   	else break;
   }
   while(m1*10<=m){
   	m1*=10;
   }
   m1=(m/m1)*m1;
   ll ans=m1*a;
   cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1759/D