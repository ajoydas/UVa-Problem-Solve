#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
#define ll long long
ll bigmod(ll n,ll p,ll m)
{
    if (p==00) return 1;
    else if(p%2==0){
        ll ret=bigmod(n,p/2,m);
        return ((ret%m)*(ret%m))%m;
    }
    else return((n%m)*(bigmod(n,p-1,m)%m))%m;
}

int main()
{
    ll n,p,m;
    while(scanf("%lld %lld %lld",&n,&p,&m)!=EOF){
    cout<<bigmod(n,p,m)<<endl;}
}

