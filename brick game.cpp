#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int n,age,ret;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>age;
        if(i==(n+2)/2)ret=age;
        }
        printf("Case %d: %d\n",j,ret);
    }
}
