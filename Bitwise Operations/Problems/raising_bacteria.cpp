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
    bitset<32>bits(n);
    int c=0;
    for(int i=0;i<32;i++){
      if(bits[i]==1)
        c++;
    }
    cout<<c<<'\n';

  }
  return 0;
}
//https://codeforces.com/problemset/problem/579/A