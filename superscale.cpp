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
#define max_n 1000
#define max_w 100
int n;
int dp[max_n+1][max_w+1];
int weight[max_n+1];
int cost[max_n+1];
int cap;
int func(int i,int w)
{
    if(i==n+1)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    int profit1=0,profit2=0;
    if(w+weight[i]<=cap){
        profit1=cost[i]+func(i+1,w+weight[i]);
    }
    profit2=func(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{

    memset(dp,-1,sizeof(dp));
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>cost[i]>>weight[i];
        int f;
        cin>>f;
        int max=0;
        while(f--){
            cin>>cap;
            max+=func(1,0);
            memset(dp,-1,sizeof(dp));
        }
        cout<<max<<endl;
    }
}
