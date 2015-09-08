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
    ll t,cs=1,n;
    //ifstream infile("in.txt");
    cin>>t;
    while(t--){
        cin>>n;
        ll num=ceil(sqrt((double)n));
        //cout<<num<<endl;
        ll row,col,row1st,col1st,rowlast,collast;
        if(num%2==0){
            row1st=(num-1)*(num-1)+1;
            //cout<<row1st<<endl;
            if(row1st+num-1>=n){
                col=n-row1st+1;
                row=num;
            }
            else {
                rowlast=row1st+num-1;
                col=num;
                row=num-(n-rowlast);
            }
        }
        else {
            col1st=(num-1)*(num-1)+1;

            if(col1st+num-1>=n){
                row=n-col1st+1;
                col=num;
                //cout<<row<< " "<<col<<endl;
            }
            else {
                collast=col1st+num-1;
                row=num;
                col=num-(n-collast);
                //cout<<collast<<" "<<row<< " "<<col<<endl;
            }
        }
        printf("Case %lld: %lld %lld\n",cs++,col,row);
    }
}
