#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=2e5+9;
const ll INF= 1e18+7;
vector<vector<ll>>val;
int n;
string s;

ll ans(int x,int c){
    if(c==0)
        return stoll(s.substr(x));
    if(val[x][c]!=-1)
        return val[x][c];
    ll y=INF;
    for (int i=x;i<n-c;i++) {
        ll p=stoll(s.substr(x,i-x+1));
        ll q =ans(i+1,c-1);
        y=min(y,p+q);
        y=min(y,p*q);
    }
    return val[x][c]=y;
}

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif 
    int t=1;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;       
        val.assign(n,vector<ll>(n,-1));
        cout<<ans(0,n-2)<<'\n';
    }
}
//https://codeforces.com/contest/1986/problem/D