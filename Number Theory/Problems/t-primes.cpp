#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,d;
    int x,i,j,n;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%lld",&a);
        n=0;
        d=sqrt(a);
        for(j=2;j*j<=d;j++)
            {
                if(d%j==0)
                {
                    n=1;
                    break;
                }
            }
        if(n==0 && d*d==a && a>1)
            printf("YES\n");
        else printf("NO\n");
    }
 return 0;
}
//https://codeforces.com/problemset/problem/230/B