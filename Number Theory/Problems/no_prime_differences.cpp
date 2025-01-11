#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int32_t main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int t=1;
  cin>>t;
  while(t--)
  {
   int n,m;
   cin>>n>>m;
   if(n==4){
    for(int i=1;i<=n;i++){
      for(int j=i,k=0;k<m;j+=n,k++)
        cout<<j<<" ";
      cout<<'\n';
    }
    continue;
   }
   for(int i=0;i<n;i+=2){
    for(int j=i*m+1,k=0;k<m;j++,k++){
      cout<<j<<" ";
    }
    cout<<'\n';
   }
   for(int i=1;i<n;i+=2){
    for(int j=i*m+1,k=0;k<m;j++,k++)
      cout<<j<<" ";
    cout<<'\n';
   }
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1838/C