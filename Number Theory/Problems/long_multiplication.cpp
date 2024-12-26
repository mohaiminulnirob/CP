#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265358979323846264338327
#define pb push_back
const int mod=1e9+7;
const int N=2e5+9;
int n;
int a[N];
bool remove(int x){
  int b[n];
  int i,j=0;
  bool possible=1;
  for(i=0,j=0;i<n;i++){
    if(i==x)
      continue;
    else{
      b[j]=a[i];
      j++;
    }
  }
  int prev=0;
  for(int i=1;i<j;i++){
    int crnt=__gcd(b[i],b[i-1]);
    if(crnt<prev)
      possible=false;
    prev=crnt;
  }
  return possible;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
  int t=1;
  cin>>t;
  while(t--)
  {
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int b[n]={0};
    int indx=0;
    for(int i=0;i<n-1;i++){
      b[i+1]=__gcd(a[i],a[i+1]);
      if(b[i+1]<b[i])
      {
        indx=i+1;
      }
    }
    if(remove(indx) || remove(indx-1) || remove(indx-2) || indx==0)
      cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

  }
  return 0;
}
//https://codeforces.com/problemset/problem/1980/D#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    int t;
    cin>>t;
    while(t--)
    {
        string x,y;
        cin>>x>>y;
        int done=0;
        for(int i=0;i<x.length();i++){
            if(x[i]==y[i])
                continue;
            else if(done==0){
                if(x[i]<y[i]){
                    char temp=x[i];
                    x[i]=y[i];
                    y[i]=temp;
                }
                done=1;
            }
            else if(x[i]>y[i]){
                char temp=y[i];
                y[i]=x[i];
                x[i]=temp;
            }
        }
        cout<<x<<'\n'<<y<<'\n';
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1954/C