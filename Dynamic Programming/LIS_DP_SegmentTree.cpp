#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=1e6+9;
const int M=1e5+9;
int arr[N],dp[N];
int tree[4*M];
void init(int node,int b,int e)
{
    if(b==e) {
        tree[node]=0;
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid= (b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=max(tree[Left],tree[Right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return -1e9;
    if(b>=i && e<=j)
        return tree[node];
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(Left,b,mid,i,j);
    int p2=query(Right,mid+1,e,i,j);
    return max(p1,p2);
}
void update(int node,int b,int e,int i,int value)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i) {

       tree[node]=max(tree[node],value);
       return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    update(Left,b,mid,i,value);
    update(Right,mid+1,e,i,value);
    tree[node]=max(tree[Left],tree[Right]);
}
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
   for(int i=1;i<=n;i++)
    cin>>arr[i];
   memset(tree,0,sizeof tree);
   init(1,1,M);
   for(int i=1;i<=n;i++){
    dp[i]=1;
    // int mx=0;
    // for(int j=1;j<i;j++){
    //     if(a[i]>a[j])
    //         mx=max(dp[j]+1,mx);
    // }
    if(arr[i]!=1){
        int mx=query(1,1,M,1,arr[i]-1);
        mx++;
        dp[i]=max(dp[i],mx);
    }
    update(1,1,M,arr[i],dp[i]);
   }
   int ans=0;
   for(int i=1;i<=n;i++){
    ans=max(ans,dp[i]);
   }
   cout<<ans;
  }
  return 0;
}
//LIS-> Longest Increasing Subsequence