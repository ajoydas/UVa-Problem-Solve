#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        double d,v,u;
        cin>>d>>v>>u;
        if(u<=v || u==0||v==0)printf("Case %d: can't determine\n",i);
        else printf("Case %d: %0.3lf\n",i,(d/(sqrt(u*u-v*v)))-(d/u));
    }
}

