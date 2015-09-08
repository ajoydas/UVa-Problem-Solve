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
        int sum=0,temp;
        For(i,4){
            cin>>temp;
            sum+=temp;
        }
        vector<int>ct;
        For(i,3){
            cin>>temp;
            ct.push_back(temp);
        }
        sort(ct.begin(),ct.end(),greater<int>());
        temp=(ct[0]+ct[1])/2;
        sum+=temp;
        string s;
        if(sum>=90)s="A";
        else if(sum>=80)s="B";
        else if(sum>=70)s="C";
        else if(sum>=60)s="D";
        else s="F";
        cout<<"Case "<<cs++<<": "<<s<<endl;
    }
}
