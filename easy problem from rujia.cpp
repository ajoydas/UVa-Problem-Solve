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
    int n,M,i=0;
    ifstream infile("in.txt");
    while(infile>>n>>M){
    if(infile.eof()==1)break;
    i=0;
    vector <vector <int> > matr;
    vector <int> v;
    //matr.push_back(newColumn);
    //matr.at(rowNumber).push_back(intValue);
    map<int,int>m;
    for(int j=1;j<=n;j++){
        int num;
        infile>>num;
        if(m.find(num)==m.end()){
            m[num]=i++;
            //cout<<m[num]<<" ";
            matr.push_back(v);
        }
        //cout<<m[num]<<" ";
        matr.at(m[num]).push_back(j);
        //cout<<matr[m[num]][0];
    }
    while(M--){
        int place,num;
        infile>>place>>num;
        if(m.find(num)==m.end()){cout<<0<<endl;continue;}
        else if(place>matr[m[num]].size()){cout<<0<<endl;continue;}
        cout<<matr[m[num]][place-1]<<endl;
    }
    }

}
