#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=2e5+9;
int32_t main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif 
  int t=1;
  cin>>t;
  while(t--)
  {
    int x,p;
    cin>>x;
    bitset<32>bits(x);
    vector<int>ans;
    ans.pb(x);
    for(int i=0;i<32;i++){
        if(bits[i]){
            if((1<<i)==x){
                p=i;
                break;
            }
            x-=1<<i;
            ans.pb(x);
        }
    }
    for(int i=p-1;i>=0;i--){
        ans.pb(1<<i);
    }
    cout<<ans.size()<<'\n';
    for(auto u:ans)
        cout<<u<<" ";
    cout<<'\n';
  } 
  return 0;
}
//https://codeforces.com/problemset/problem/1864/C