#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=3010;
int dp[N][N];
string a,b;
int lcs(int i, int j){
	if(i>=a.length() || j>=b.length()) return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	int ans=lcs(i+1,j);
	ans = max(ans, lcs(i,j+1));
	if(a[i]==b[j])
		ans=max(ans,1+lcs(i+1,j+1));
	return dp[i][j]=ans;
}
void print(int i, int j){
	if(i>=a.length() || j>=b.length()) return;
	if(a[i]==b[j]){
		cout<<a[i];
		print(i+1,j+1);
		return;
	}
	int x=lcs(i+1,j);
	int y=lcs(i,j+1);
	if(x>=y)
		print(i+1,j);
	else print(i,j+1);
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
  	memset(dp,-1, sizeof dp);
  	cin>>a>>b;
  	//cout<<lcs(0,0)<<'\n';
  	print(0,0);

   
  }
  return 0;
}
//LCS-> Longest Common Subsequence
//https://atcoder.jp/contests/dp/tasks/dp_f