#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int32_t main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int t=1;
  cin>>t;
  while(t--)
  {
   ll a=0,b,c,d;
   cin>>b>>c>>d;
   bool possible = true;
   for(int i=0;i<62;i++){
      if(1ll<<i & d){
         if(!(1ll<<i & b) && (1ll<<i & c)){
            possible = false;
            break;
         }
         else if(!(1ll<<i & b) && !(1ll<<i & c))
            a+=1ll<<i;
      }
      else{
         if((1ll<<i & b) && !(1ll<<i & c)){
            possible = false;
            break;
         }
         else if((1ll<<i & b) && (1ll<<i & c))
            a+=1ll<<i;

      }
   }
   if(possible)
      cout<<a<<'\n';
   else cout<<"-1"<<'\n';
  }
  return 0;
}
//https://codeforces.com/contest/2020/problem/C