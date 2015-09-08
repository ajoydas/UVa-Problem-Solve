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
    int t,cs=1;
    //ifstream infile("in.txt");
    cin>>t;
    while(t--){
        int row,column,high,low;
        cin>>row>>column>>high>>low;
        string s;
        int letters[26],temp=row;
        ms0(letters);
        while(temp--){
            cin>>s;
            until(i,column){
                letters[s[i]-'A']+=1;
            }
        }
        int max=0,sum=0;
        until(i,26){
            if(letters[i]>max){
                max=letters[i];
                sum=letters[i];
            }
            else if(letters[i]==max)sum+=letters[i];
        }
        //cout<<max<<" "<<sum<<endl;
        printf("Case %d: %d\n",cs++,(sum*high+((row*column)-sum)*low));
    }
}
