#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
const int N=1e5+9;
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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    int com=1<<n;
    int ans=0;
    for(int i=0;i<com;i++){
      int sum=0;
      for(int bits=0;bits<n;bits++){
        if(i&(1<<bits))
          sum+=a[bits];
        else sum-=a[bits];
      }
      if(sum%360==0){
        ans=1;
        break;
      }
    }
    if(ans)
      cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

  }
  return 0;
}
//https://codeforces.com/problemset/problem/1097/B