#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=1e6+9;
int com[N];
ll comb(int n){
	if(n==0)
		return 1;
	if(com[n]!=-1)
		return com[n];
	ll sum=0;
	for(int i=1;i<=6;i++){
		if(n>=i)
			sum+=comb(n-i);

	}
	return com[n]=sum%mod;
}
int32_t main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

  int t=1;
 // cin>>t;
  while(t--)
  {
   memset(com, -1,sizeof com);
   int n;
   cin>>n;
   cout<<comb(n)<<'\n';
  }
  return 0;
}
//https://cses.fi/problemset/task/1633