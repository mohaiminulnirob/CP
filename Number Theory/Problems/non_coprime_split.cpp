#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r,n=0,i;
        scanf("%d %d",&l,&r);
        if(r<4)
            printf("-1\n");
        else if(r-l>0 || l%2==0)
            printf("2 %d\n",(r/2)*2-2);
        else
        {
            for(i=3;i*i<=l;i+=2)
            {
                if(l%i==0)
                {
                    n=i;
                    break;
                }
            }
            if(n>0)
                printf("%d %d\n",n,l-n);
            else printf("-1\n");
        }

    }
    return 0;
}
//https://codeforces.com/problemset/problem/1872/C