#include <bits/stdc++.h>
using namespace std;
long long dp[51];
long long fib(int n)
{
    if(n==1||n==0)return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}
int main()
{
    long long n;
    while(scanf("%lld",&n)){
            if(n==0)break;
        for(int i=1;i<=n;i++)dp[i]=-1;
        cout<<fib(n)<<endl;
    }
}
