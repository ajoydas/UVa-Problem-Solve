#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ms0(a) memset(a,0,sizeof(a))
#define msn(a,n) memset(a,n,sizeof(a))
#define until(i,n) for(__typeof(n)i=0;i<n;i++)
#define For(i,n) for(__typeof(n)i=1;i<=n;i++)
#define init(i,a,n) for(i=0;i<n;i++)a[i]=i
#define inf 10109999990
#define ll long long
#define llu long long unsigned
#define db double
#define ldb long double
#define sq(x) ((x)*(x))
#define all(x) sort(x.begin(),x.end())
#define CS printf("Case %d:",cs++)
#define PI 3.1415926535897932384626433832795
#define II ({int a; scanf(" %d", &a); a;})
#define DD ({DB a; scanf(" %lf", &a); a;})
#define LL ({LL a; scanf(" %lld", &a); a;})
#define forstl(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)

struct football
{
    string name;
    int attack,defend;
}f[12];

bool cmp(football a, football b)
{
    if(a.attack>b.attack)return true;
    if(a.attack==b.attack && a.defend<b.defend)return true;
    if(a.attack==b.attack && a.defend==b.defend && a.name<b.name)return true;
    else return false;
}

bool namecmp(football a, football b)
{
    return a.name<b.name;
}

int main()
{
    int t=II;
    int cs=1;
    until(j,t){
        until(i,10)cin>>f[i].name>>f[i].attack>>f[i].defend;
    sort(f,f+10,cmp);
    sort(f,f+5,namecmp);
    sort(f+5,f+10,namecmp);
    CS;
    cout<<"\n(";
    until(i,5){
        cout<<f[i].name;
        if(i==4)cout<<")\n";
        else cout<<", ";
    }
    cout<<"(";
    for(int i=5;i<10;i++){
        cout<<f[i].name;
        if(i==9)cout<<")\n";
        else cout<<", ";
    }
    }
}







