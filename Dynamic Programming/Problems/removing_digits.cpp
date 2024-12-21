#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=1e6+9;
ll steps[N];
ll cal(ll n){
	if(n==0) return 0;
	if(steps[n]!=-1) return steps[n];
	string s=to_string(n);
	ll c=INT_MAX;
	for(int i=0;i<s.size();i++){
		if(s[i]-'0'>0)
		   c=min(c,1+cal(n-(s[i]-'0')));
	}
	return steps[n]=c;
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
   memset(steps, -1, sizeof steps);
   ll n;
   cin>>n;
   cout<<cal(n)<<'\n';
  }
  return 0;
}
//https://cses.fi/problemset/task/1637