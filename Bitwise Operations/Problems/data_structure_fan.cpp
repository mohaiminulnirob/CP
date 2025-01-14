#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

int32_t main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int t=1;
  cin>>t;
  while(t--)
  {
   int n;
   cin>>n;
   int a[n+1];
   int xs1[n+1]={0},xs0[n+1]={0};
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   string s;
   cin>>s;
   for(int i=1;i<=n;i++){
      xs0[i]=xs0[i-1];
      xs1[i]=xs1[i-1];
    if(s[i-1]=='0')
      xs0[i]^=a[i];
    else xs1[i]^=a[i];
   }
   int s1=xs1[n];
   int s0=xs0[n];
   int q;
   cin>>q;
   while(q--){
    int type;
    cin>>type;
    if(type==1){
      int l,r;
      cin>>l>>r;
      int x1=xs1[r]^xs1[l-1];
      int x0=xs0[r]^xs0[l-1];
      s0=(s0^x0)^x1;
      s1=(s1^x1)^x0;
    }
    else{
      int x;
      cin>>x;
      if(x==0)
        cout<<s0<<" ";
      else cout<<s1<<" ";
    }
   }
   cout<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1872/E