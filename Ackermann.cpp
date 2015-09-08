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
/*int func(int n)
{
    if(n%2==0)return n/2;
    else return 3n+1;
}*/
int main()
{
    ifstream infile("in.txt");
    long long low,high,count,max=0,desired,temp;
    while(infile>>low>>high){
        if(low==0&&high==0)break;
        if(low>high){swap(low,high);}
        max=0;
        for(long long i=low;i<=high;i++){
            count=0;
            long long n=i;
            //cout<<i<<endl;
            while(1){
                    if(count>0&& n==1)break;
                    //if(count>0 & i!=3)break;
                    if(n%2==0&&(n/2)==1){n=n/2;count+=1;}
                else if(n%2==0&&(n/2)%2!=0){n=3*(n/2)+1;count+=2;}
                else if(n%2==0&&(n/2)%2==0){n=(n/2)/2;count+=2;}
                else if(n%2==1){n=(3*n+1)/2;count+=2;}
                //else if(n%2==1&& count>1 &&n =1)n=(3*n+1)/2;
                //cout<<n<<endl;
            }
            if(max<count){max=count;desired=i;}
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",low,high,desired,max);
    }
}
