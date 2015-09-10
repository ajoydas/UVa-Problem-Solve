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
    string s1="1234567890-=",s3="ASDFGHJKL;'",s2="QWERTYUIOP[]",s4="ZXCVBNM,./",test,s;
    while(getline(cin,test)){
            if(cin.eof()==1)break;
        //cout<<test;
        until(i,test.size()){

            if(test[i]==' ')continue;
            int j;
            for(j=1;j<s1.size();j++){
                if(test[i]==s1[j]){test[i]=s1[j-1];break;}
            }
            if(j!=s1.size())continue;
            for(j=1;j<s2.size();j++){
                    //cout<<test[i]<<" ";
                if(test[i]==s2[j]){test[i]=s2[j-1];break;}
            }
            if(j!=s2.size())continue;
            for(j=1;j<s3.size();j++){
                if(test[i]==s3[j]){test[i]=s3[j-1];break;}
            }
            if(j!=s3.size())continue;
            for(j=1;j<s4.size();j++){
                if(test[i]==s4[j]){test[i]=s4[j-1];break;}
            }
            if(j!=s4.size())continue;

        }
        cout<<test<<endl;
    }

}
