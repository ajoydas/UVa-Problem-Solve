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

int main()
{
    ll n,m;
    while(cin>>n>>m){
        if(cin.eof()==1) break;
        string s1="",s2="",s3="";
        while(n!=0){
            s1+=(n%2)+'0';
            n/=2;
        }
        while(m!=0){
            s2+=(m%2)+'0';
            m/=2;
        }
        //cout<<s1<<" "<<s2<<endl;
        if(s1.size()<s2.size()){
            string temp=s1;
            s1=s2;
            s2=temp;
        }
        int i,sum=0;
        for(i=0;i<s2.size();i++){
            if(s1[i]=='0'&& s2[i]=='1')s3+=s2[i];
            else if(s1[i]=='1'&& s2[i]=='0')s3+=s1[i];
            //else if(s1[i]=='0'&& s2[i]==0)s3+=s1[i];
            else s3+='0';
        }
        for(i;i<s1.size();i++)s3+=s1[i];
        //cout<<s3<<endl;
        until(j,s3.size()){
            sum+=((s3[j]-'0')*pow(2,j));
            //cout<<sum<<" ";
        }
        cout<<sum<<endl;
    }


}
