#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
const int N=2e5+9;

int32_t main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif 

  int t=1;
  //cin>>t;
  while(t--)
  {
    int n,q; 
    cin>>n>>q;
    int a[n+1];
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    // a is already sorted
    while(q--){
      int x; 
      cin>>x;
      int l=1,r=n;
      bool found=false;
      int position;
      while(l<=r){
        int mid=(l+r)/2;
        if (a[mid]==x){
          found=true;
          position=mid;
          break;
        }
        else if(a[mid]<x){
          l=mid+1;
        }
        else {
          r=mid-1;
        }
      }
      if(found){
        cout<<"YES\n";
        //cout<<position<<'\n';
      }
      else{
        cout<<"NO\n";
      }
    }
 }
  return 0;
}