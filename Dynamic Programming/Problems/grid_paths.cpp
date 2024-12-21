#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=1e3+9;;
int n;
string s[N];
ll dp[N][N];
ll cal(int i,int j){
    if(dp[i][j]!=-1) return dp[i][j];
    if(i>n-1 || j>n-1 || s[i][j]=='*')
       return 0;
    if(i==n-1 && j==n-1) return 1;
    ll c=0;
    c+=cal(i+1,j)+cal(i,j+1);
    return dp[i][j]=c%mod;
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
  	memset(dp,-1,sizeof dp);
   cin>>n;
   for(int i=0;i<n;i++){
   	cin>>s[i];
   }
   cout<<cal(0,0)<<'\n';
  }
  return 0;
}
//https://cses.fi/problemset/task/1638