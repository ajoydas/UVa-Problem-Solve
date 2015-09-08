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
    int n,cs=1;
    //ifstream infile("in.txt");
    cin>>n;
    while(n--){
        ll amount,tax=0;
        cin>>amount;
        if(amount>180000){
            amount-=180000;
            if(amount<=300000){
                tax+=ceil((double)amount*0.1);
                amount=0;
            }
            else{
                amount-=300000;
                tax+=30000;
                if(amount<=400000){
                tax+=ceil((double)amount*0.15);
                amount=0;
            }
            else{
                tax+=ceil((double)400000.0*0.15);
                amount-=400000;
                if(amount<=300000){
                tax+=ceil((double)amount*0.2);
                amount=0;
            }
            else{
                amount-=300000;
                tax+=ceil((double)300000*0.2);
                tax+=ceil((double)amount*0.25);
                amount=0;
            }
            }
            }
        }
        if(tax<2000 && tax!=0)tax=2000;
        printf("Case %d: %d\n",cs++,tax);
    }
}
