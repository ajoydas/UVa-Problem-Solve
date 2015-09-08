#include <bits/stdc++.h>
using namespace std;
int remain,par[26],rank[26];

int find(int r)
{
    if(par[r]==r)return r;
    return(find(par[r]));
}

void Union(int a,int b)
{
    int u,v;
    u=find(a);
    v=find(b);
    if(u!=v){
            remain--;
        if(rank[u]>rank[v])par[u]=v;
        else{ par[v]=u;
            if(rank[u]==rank[v])rank[v]++;}
    }
}
void make(int i)
{
    par[i]=i;
    rank[i]=0;
}

int main()
{
    int t,x,y,i,n;
    scanf("%d\n\n",&t);
    for(i=1;i<=t;i++){
            string s;
            getline(cin,s);
            n=s[0]-'A'+1;
            remain=n;
            while(n--)make(n);
        while(1){
            if(!getline(cin,s)|| s.empty())break;
            x=s[0]-'A';
            y=s[1]-'A';
            Union(x,y);
            }
            if(t!=1)cout<<"\n";
            cout<<remain<<endl;
        }

}
