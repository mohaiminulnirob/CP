#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        long long r=n%m,count=0;
        for(i=0;i<1000 && r!=0;i++)
        {
            count+=r;
            r=(r*2)%m;
        }
        if(r==0)
            cout<<count<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1875/C