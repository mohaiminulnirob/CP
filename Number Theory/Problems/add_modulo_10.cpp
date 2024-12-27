#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define inputa for(int i=0;i<n;i++)cin>>a[i];
#define outputa for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<'\n';
#define all a.begin(),a.end()
#define rall a.rbegin(),a.rend()
#define mii map<int,int>
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
    int a[n];
    bool f5=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%5==0){
            f5=true;
            a[i]=a[i]+a[i]%10;
        }
    }
    if(f5){
        sort(a,a+n);
        if(a[0]==a[n-1])
            cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        continue;
    }
    bool f2=false,f12=false;
    for(int i=0;i<n;i++){
        while(a[i]%10!=2){
            a[i]=a[i]+a[i]%10;
        }
        if(a[i]%20==2)
            f2=true;
        if(a[i]%20!=2)
            f12=true;
    }
    if(f2 && f12){
        cout<<"NO"<<'\n';
    }
    else cout<<"YES"<<'\n';
  }
  return 0;
}
//https://codeforces.com/problemset/problem/1714/E