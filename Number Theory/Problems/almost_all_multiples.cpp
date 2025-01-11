#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<int> primeFactorize(int n){
    vector<int>factors;
    while(n%2==0){
        n/=2;factors.pb(2);
    }
    for(int i=3;i*i<=n;i+=2)
        while(n%i==0){
            factors.pb(i);n/=i;
        }
    if(n>2)
        factors.pb(n);
    return factors;
}

int32_t main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int t=1;
  cin>>t;
  while(t--)
  {
   int n,x;
   cin>>n>>x;
   if(n%x!=0){
    cout<<"-1"<<'\n';
   }
   else if(n==x){
    cout<<n<<" ";
    for(int i=2;i<n;i++)
        cout<<i<<" ";
    cout<<"1"<<'\n';
   }
   else{
    int ans[n+1]={0};
    ans[1]=x;
    ans[n]=1;
    int k=n/x;
    vector<int>factors=primeFactorize(k);
    // int sz=factors.size();
    // cout<<sz<<'\n';
    int y;
    ans[x]=y=x*factors[0];
    for(int i=1;i<factors.size();i++){
        ans[y]=y*factors[i];
        y=y*factors[i];
    }
    for(int i=1;i<=n;i++){
        if(ans[i])
            cout<<ans[i]<<" ";
        else cout<<i<<" ";
    }
    cout<<'\n';
   }
  }
  return 0;
}
//https://codeforces.com/contest/1758/problem/C