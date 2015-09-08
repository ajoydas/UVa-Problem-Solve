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
    string s;
    ll value[]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
    ifstream infile("in.txt");
    while(infile>>s){
        if(infile.eof()==1)break;
        string sum="";
        until(i,s.size()){
            ll num=value[s[i]-'A'];
            if(num==0)continue;
            else if(i!=s.size()-1&&value[s[i+1]-'A']==num)continue;
            else if(i!=s.size()-1 && value[s[i+1]-'A']!=num)sum+=(num+48);
            else if(i==s.size()-1)sum+=(num+48);
            //cout<<sum<<" "<<num<<endl;
        }
        cout<<sum<<endl;
    }
}
