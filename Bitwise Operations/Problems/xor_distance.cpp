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
   ll a,b,r;
   cin>>a>>b>>r;
   bitset<64>bitsa(a),bitsb(b),bitsr(r);
   bool f=false;
   int x=0;
   ll sum=0;
   for(int i=63;i>=0;i--){
    bool used=false;
    if(x){
        if(x==1){
            if((bitsa[i]==1&&bitsb[i]==0) && (f || bitsr[i])){
                sum-=1ll<<i;
                used=true;
            }
            else if(bitsb[i]==1 && bitsa[i]==0)
                sum-=1ll<<i;
            else if(bitsa[i]==1 && bitsb[i]==0)
                sum+=1ll<<i;
        }
        if(x==2){
            if((bitsb[i]==1&&bitsa[i]==0) && (f || bitsr[i])){
                used=true;
                sum-=1ll<<i;
            }
            else if(bitsa[i]==1 && bitsb[i]==0)
                sum-=1ll<<i;
            else if(bitsb[i]==1 && bitsa[i]==0)
                sum+=1ll<<i;
        }
    }
    else if(bitsa[i]!=bitsb[i]){
        sum+=1ll<<i;
        if(bitsa[i])
            x=1;
        else x=2;
    }
    if(bitsr[i] && !used)
        f=true;
   }
   cout<<sum<<'\n';

  }
  return 0;
}
//https://codeforces.com/problemset/problem/1918/C