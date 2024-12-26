#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x=0,y=0,num=1;
        for(int i=1;i<=max(a,b);i++)
        {
            if(i>=c)
            {
                if(i==a)
                    x+=num;
                if(i<=b)
                    y+=num;
            }
            num*=10;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1511/B