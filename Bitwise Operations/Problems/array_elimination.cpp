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
   int n;
   cin>>n;
   map<int,int>m;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    bitset<32>bits(x);
    for(int i=0;i<31;i++){
        if(bits[i])
            m[i]++;
    }
   }
   for(int i=1;i<=n;i++){
    bool f=true;
    for(int j=0;j<31;j++){
        if(m[j]%i!=0)
            f=false;
    }
    if(f)
        cout<<i<<" ";
   }
   cout<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1601/A