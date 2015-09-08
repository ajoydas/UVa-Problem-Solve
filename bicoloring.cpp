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
#define max 1000
vector<int>edges[max],cost[max];

void bfs(int n,int src)
{
    queue<int>q;
    q.push(src);
    int visited[max]={0},parent[max],level[max];
    visited[src]=1;
    level[src]=0;
    while(!q.empty()){
        int u=q.front();
        for(int i=0;i<edges[u].size();i++){
            int v=edges[u][i];
            if(!visited[v]){
                level[v]=level[u]+1;
                parent[v]=u;
                visited[v]=1;
                q.push(v);
            }
        }
        q.pop();
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<edges[i].size();j++){
            if(level[i]==level[edges[i][j]]){
                cout<<"NOT BICOLORABLE.";
                return;
            }
        }
    }
    cout<<"BICOLORABLE.";
    return;
}

int main()
{
    int n,e,i,x,y;
    while(1){
    cin>>n;
    if(n==0)return 0;
    cin>>e;
    for(i=1;i<=e;i++){
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    bfs(n,0);
    cout<<"\n";
    for(int i=0;i<n;i++)edges[i].clear();
    }



}








