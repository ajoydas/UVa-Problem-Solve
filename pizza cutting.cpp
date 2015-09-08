#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i;
    while (scanf("%lld",&n)){
            if(n<0)break;
        i=(n*(n+1))/2+1;
        cout<<i<<endl;
    }
}
