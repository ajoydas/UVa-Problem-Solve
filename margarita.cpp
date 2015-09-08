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
    ifstream infile("in.txt");
    int test;
    infile>>test;
    string s="MARGARITA";
    int real[26];
    ms0(real);
    until(i,s.size()){
        real[s[i]-'A']+=1;
    }
    while(test--){
        string  name;
        infile>>name;
        int num[26];
        ms0(num);
        until(i,name.size()){
            if(real[name[i]-'A']!=0)num[name[i]-'A']+=1;
        }
        int min=inf;
        until(i,26){
            if(real[i]!=0){num[i]=num[i]/real[i];
                if(min>num[i])min=num[i];
                //cout<<min<<endl;
            }
        }
        if(min==INT_MAX)min=0;
        cout<<min<<endl;
    }
}









