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
map<int,int>visited;

void bfs(int src,map<int,vector<int> >graph)
{
    queue<int>s;
    s.push(src);
    visited[src]=0;
    while(s.empty()==false){
        int top=s.front();
        s.pop();
        for(int i=0;i<graph[top].size();i++){
            int n=graph[top][i];
            if(!visited.count(n)){
                visited[n]=visited[top]+1;
                s.push(n);
            }
        }
    }
}

int main()
{
    int edges,x,y,cases=1;
    while(scanf("%d",&edges)&&edges){
        map<int,vector<int> >graph;
        for(int i=0;i<edges;i++){
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        int ttl,src;
        while(scanf("%d %d",&src,&ttl)&&(src!=0||ttl!=0)){
            map<int,int>::const_iterator itr;
            visited.clear();
            bfs(src,graph);
            int result=0;
            for(itr=visited.begin();itr!=visited.end();++itr){
                if((*itr).second>ttl)++result;
            }
            result += graph.size()-visited.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases,result,src,ttl);
            cases++;
        }
    }
}
