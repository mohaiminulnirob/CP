#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
    	int n,m,z;
    	cin>>n>>m>>z;
    	vector<int>v;
    	queue<int>q;
    	q.push(z);
    	for(int i=0;i<m;i++){
    		for(auto u: v)
    			q.push(u);
    		v.clear();
    		int x;
    		char  y;
    		cin>>x>>y;
    		int vis[n+1]={0};
    		while(!q.empty()){
    			int a=q.front();
    		    q.pop();
    		    if(y=='0'){
    		    	int b=(a+x)%n;
    		    	if(b==0)
    		    		b=n;
    		    	if (!vis[b]){
    		    		v.push_back(b);
    		    		vis[b]=1;
    		    	}
    		    }
    		    else if(y=='1'){
    		    	int b=(a-x+n)%n;
    		    	if(b==0)
    		    		b=n;
    		    	if (!vis[b]){
    		    		v.push_back(b);
    		    		vis[b]=1;
    		    	}
    		    }
    		    else{
    		    	int b=(a+x)%n;
    		    	if(b==0)
    		    		b=n;
    		    	if (!vis[b]){
    		    		v.push_back(b);
    		    		vis[b]=1;
    		    	}
    		    	int c=(a-x+n)%n;
    		    	if(c==0)
    		    		c=n;
    		    	if (!vis[c]){
    		    		v.push_back(c);
    		    		vis[c]=1;
    		    	}
    		    }

    		}
    	}
    	set<int>s;
    	for(auto u:v)
            s.insert(u);
        cout<<s.size()<<'\n';
    	for(auto u:s)
    		cout<<u<<" ";
    	cout<<'\n';
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1941/D