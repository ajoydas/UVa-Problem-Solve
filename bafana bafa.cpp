#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,k,p;
        cin>>n>>k>>p;
        if(p%n>(n+1)-k)printf("Case %d: %d\n",i,1+(p%n-(n+1-k)));
        else if(p%n==(n+1)-k)printf("Case %d: %d\n",i,1);
        else printf("Case %d: %d\n",i,k+p%n);
    }
}
