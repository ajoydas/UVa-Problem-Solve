#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,n,cas=0;
    while(cin>>r>>n){
        if(r==0 && n==0)break;
        int max=0;
        while(max<=26 && n*max+n<r)max++;
        if(max<=26)printf("Case %d: %d\n",++cas,max);
        else printf("Case %d: impossible\n",++cas);
    }
}

