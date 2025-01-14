#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int N=2e5+9;
int dp[N],a[N],n;
int fun(int i){
	if(i==n)
		return 0;
	if(dp[i]!=-1)
		return dp[i];
	int x=1+fun(i+1);
	if(i+a[i]+1<=n){
		x=min(x,fun(i+a[i]+1));
	}
	return dp[i]=x;
}

int32_t main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int t=1;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	for(int i=0;i<n;i++){
  		cin>>a[i];
  		dp[i]=-1;
  	}

  	int ans=fun(0);
  	cout<<ans<<'\n';
   
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1881/E