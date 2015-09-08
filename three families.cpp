#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ms0(a) memset(a,0,sizeof(a))
#define msn(a,n) memset(a,n,sizeof(a))
#define until(i,n) for(__typeof(n)i=0;i<n;i++)
#define For(i,n) for(__typeof(n)i=1;i<=n;i++)
#define init(i,a,n) for(i=0;i<n;i++)a[i]=i
#define inf INT_MAX
#define ll long long
#define llu long long unsigned
#define db double
#define ldb long double
#define sq(x) ((x)*(x))
#define all(x) sort(x.begin(),x.end())
#define CS printf("Case %d: ",cs++)
#define PI 3.1415926535897932384626433832795
#define II ({int a; scanf(" %d", &a); a;})
#define DD ({DB a; scanf(" %lf", &a); a;})
#define LL ({LL a; scanf(" %lld", &a); a;})
#define forstl(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)

int main()
{
    int t;
    //ifstream infile("in.txt");
    cin>>t;
    while(t--){
        int a,b,money;
        cin>>a>>b>>money;
        //float avg=(a+b)/3;
        //float geta=((-avg+a)*money)/(-avg+a-avg+b);
        //cout<<geta<<" "<<avg<<endl;
        int geta=((2*a-b)*money)/(a+b);
        if(geta<0)geta=0;
        //if(geta>money)geta=money;
        cout<<geta<<endl;
    }
}
