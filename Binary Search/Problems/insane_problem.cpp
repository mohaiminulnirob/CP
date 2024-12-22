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
    ll k,l1,r1,l2,r2;
    cin>>k>>l1>>r1>>l2>>r2;
    ll ans=0;
    for(int i=0;i<32;i++){
        ll l=l1, r=r1;
        ll pos=-1;
        ll kn=pow(k,i);
        if(kn>r2)
            continue;
        while(l<=r){
            ll mid=(l+r)/2;
            if(mid*kn<=r2 && mid*kn>=l2){
                pos=mid;
                r=mid-1;
            }
            else if(mid*kn<l2){
                l=mid+1;
            }
            else if(mid*kn>r2){
                r=mid-1;
            }

        }
        ll pos1=pos;
        l=l1,r=r1;
        pos=-2;
        while(l<=r){
            ll mid=(l+r)/2;
            if(mid*kn<=r2 && mid*kn>=l2){
                pos=mid;
                l=mid+1;
            }
            else if(mid*kn<l2){
                l=mid+1;
            }
            else if(mid*kn>r2){
                r=mid-1;
            }

        }
        if(pos>=pos1){
            ans+=pos-pos1+1;
        }
    }
    cout<<ans<<'\n';
   
  }
  return 0;
}
//https://codeforces.com/contest/2044/problem/E