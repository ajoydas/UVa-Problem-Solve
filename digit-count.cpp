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
#define CS printf("Case %d: ",cs++)
#define PI 3.1415926535897932384626433832795
#define II ({int a; scanf(" %d", &a); a;})
#define DD ({DB a; scanf(" %lf", &a); a;})
#define LL ({LL a; scanf(" %lld", &a); a;})
#define forstl(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)
string NumberToString (ll n )
{
	stringstream ss;
	ss << n;
	return ss.str();
}

int main()
{
    //ifstream infile("in.txt");
    int test;

    cin>>test;
    while(test--){
        int num;
        int digit[10];
        ms0(digit);
        cin>>num;
        For(i,num){
            string s=NumberToString(i);
            until(j,s.size()){
                digit[s[j]-'0']+=1;
            }
        }
        until(i,10){
            cout<<digit[i];
            if(i==9)cout<<"\n";
            else cout<<" ";
        }
    }
}
