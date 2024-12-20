#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=2e5+9;
map<int,int>dp;
int fibo(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(dp[n])
		return dp[n];
	dp[n]=fibo(n-1)+fibo(n-2);
	return dp[n];
}

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
   int n=50;
   cout<<fibo(n)<<'\n';
  }
  return 0;
}