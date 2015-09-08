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
    int n;
    //ifstream infile("in.txt");
    while(cin>>n){
    if(n==0)break;
    int arr[n][n];
    until(i,n){
        until(j,n)cin>>arr[i][j];
    }
    int colcheck=1,sum,rowcheck=1,row=0,col=0;
    until(i,n){
        sum=0;
        until(j,n){
            sum+=arr[i][j];
        }
        if(sum%2!=0){rowcheck=0;row=i+1;break;}
    }
    until(i,n){
        sum=0;
        until(j,n){
            sum+=arr[j][i];
        }
        if(sum%2!=0){colcheck=0;col=i+1;break;}
    }
    if(rowcheck==1 && colcheck==1)cout<<"OK\n";
    else{
        if(rowcheck==0&&colcheck==0){
            arr[row-1][col-1]=abs(1-arr[row-1][col-1]);
            //cout<<arr[row-1][col-1];
            int clcheck=1,sum1,rwcheck=1;
    until(i,n){
        sum1=0;
        until(j,n){
            sum1+=arr[i][j];
        }
        if(sum1%2!=0){rwcheck=0;break;}
    }
    until(i,n){
        sum1=0;
        until(j,n){
            sum1+=arr[j][i];
        }
        if(sum1%2!=0){clcheck=0;break;}
    }
        if(rwcheck==1 && clcheck==1)printf("Change bit (%d,%d)\n",row,col);
        else cout<<"Corrupt\n";
        }
        else cout<<"Corrupt\n";
    }

    }
    return 0;
}


