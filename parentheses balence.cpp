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
    ///ifstream infile("in.txt");
    cin>>n;
    getchar();
    while(n--){
        int first=0,third=0;
        char s[130];
        //getline(cin,s);
        //cin>>s;
        //cout<<s<<endl<<s<<endl;
        gets(s);
        //cin.get(s);
        if(s[0]!='\0'){until(i,strlen(s)){
            if(s[i]==40)first+=1;
            else if(s[i]==41 && first>0)first-=1;
            else if(s[i]==41 && first==0){first=-1;break;};
            if(s[i]==91)third+=1;
            else if(s[i]==93&&third>0)third-=1;
            else if(s[i]==93 && third==0){third=-1;break;};

        }
        }
        if(first==0&&third==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
