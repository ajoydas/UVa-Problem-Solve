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
#define CS printf("Case #%d:\n",cs++)
#define PI 3.1415926535897932384626433832795
#define II ({int a; scanf(" %d", &a); a;})
#define DD ({DB a; scanf(" %lf", &a); a;})
#define LL ({LL a; scanf(" %lld", &a); a;})
#define forstl(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)

vector<vector<int> >matr;
vector<int>v;

int isprime(int n)
{
    int x=sqrt(n);
    for(int i=3;i<=x;i+=2){
        if(n%i==0)return 0;
    }
    return 1;
}


int main()
{
    int n,count=0,t=0,n1=1,n2;
    while(cin>>n){
        if(cin.eof()==1)break;
        if(count<n){
        while(1){
            if(count==n)break;
            //cout<<"Loop 1"<<endl;
            if(count==0){
                for(int i=3;;i+=2){
                    n2=isprime(i+2);
                    //cout<<"Loop 2"<<endl;
                    if(n1==1 && n2==1){
                        matr.push_back(v);
                        matr.at(count).push_back(i);
                        matr.at(count).push_back(i+2);
                        count++;
                        t=i+2;
                        n1=n2;
                        break;
                    }
                n1=n2;
                }
            }
        if(count==n)break;
            if(count>0){
                for(int i=t;;i+=2){
                        n2=isprime(i+2);
                    //cout<<"Loop 3"<<endl;
                    if(n1==1 && n2==1){
                        matr.push_back(v);
                        matr.at(count).push_back(i);
                        matr.at(count).push_back(i+2);
                        count++;
                        t=i+2;
                        n1=n2;
                        break;
                    }
                    n1=n2;
                }
            }
        }
    }

    printf("(%d, %d)\n",matr[n-1][0],matr[n-1][1]);

    }
}
