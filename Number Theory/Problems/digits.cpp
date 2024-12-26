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
   ll n,d;
   cin>>n>>d;
   set<int>ans;
   if(n==1){
      for(int i=1;i<=9;i+=2){
         if(d%i==0)
            ans.insert(i);
      }
   }
   else if(n==2){
      string s;
      for(int i=0;i<2;i++){
         s+=d+'0';
          ll x=stoll(s);
      for(int j=1;j<=9;j+=2){
         if(x%j==0)
            ans.insert(j);
      }
      }
   }
   else if(n==3){
      string s;
      for(int i=0;i<6;i++){
         s+=d+'0';
         //cout<<s<<'\n';
         ll x=stoll(s);
      for(int j=1;j<=9;j+=2){
         if(x%j==0 && 6%(i+1)==0){
            ans.insert(j);
         }
      }
      }

   }
   else{
      string s;
      for(int i=0;i<9;i++){
         s+=d+'0';
         //cout<<s<<'\n';
         ll x=stoll(s);
      for(int j=1;j<=9;j+=2){
         if(x%j==0){
            if(i+1==5 && n>=5)
              ans.insert(j);
            else if(i+1==7 && n>=7)
               ans.insert(j);
            else if(i+1==9 && n>=6)
               ans.insert(j);
            else if(i==0 || i==1 || i==2 || i==3 || i==5 || i==7)
               ans.insert(j);
         }

      }
      }

   }
   for(auto u:ans)
      cout<<u<<" ";
   cout<<'\n';
   
  }
  return 0;
}
//https://codeforces.com/contest/2043/problem/B