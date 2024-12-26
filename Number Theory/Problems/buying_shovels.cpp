#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,ans;
        cin>>n>>k;
        ans=n;
        for(long long i=1;i*i<=n && i<=k;i++)
        {
            if(n%i==0)
            {
                ans=min(ans,n/i);
                if(n/i<=k)
                ans=min(ans,i);
            }


        }
        cout<<ans<<endl;


    }
    return 0;
}
//https://codeforces.com/problemset/problem/1360/D