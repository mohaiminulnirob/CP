#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=2e5+9;

int32_t main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

  int t=1;
  cin>>t;
  while(t--)
  {
   ll n,x,y;
   cin>>n>>x>>y;
   ll sum=0;
   ll a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
   }
   sort(a,a+n);
   ll mn=sum-y;
   ll mx=sum-x;
   ll ans=0;
   for(int i=0;i<n;i++){
      ll l=i+1,r=n-1;
       ll start=-1,end=-1;
    
        while(l<=r){
          int mid=(l+r)/2;
          if(a[i]+a[mid]>=mn){
            start=mid;
            r=mid-1;
           } 
          else{
              l=mid+1;
          }
        }

            
        l=i+1;
        r=n-1;
        while(l<=r){
           int mid=(l+r)/2;
           if(a[i]+a[mid]<=mx){
              end=mid;
              l=mid+1;
            } 
            else{
               r=mid-1;
            }
        }

        if(start!=-1&&end !=-1 && start<=end) {
            ans+=(end-start+1);
        }
    }
   cout<<ans<<'\n';
  }
  return 0;
}
//https://codeforces.com/contest/2051/problem/D