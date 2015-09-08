#include <bits/stdc++.h>
using namespace std;
#define ll long long
string NumberToString ( ll n )
  {
     ostringstream ss;
     ss << n;
     return ss.str();
  }
int main()
{
    string s1,s2;
    ll i,j,priv,count,n,n1,n2;
    while(1){
        cin>>s1>>s2;
        if(s1=="0" && s2=="0")break;
        priv=0;
        count=0;

        i=s1.size()-1;
        j=s2.size()-1;
        for(;max(i,j)>=0;j--,i--){
            if(i<0)n1=48;
            else n1=s1[i];
            if(j<0)n2=48;
            else n2=s2[j];
            n=n1+n2-2*48+priv;
            if(n>=10){count++;
            }
            priv=n/10;
        }
        if(count==0)cout<<"No carry operation.\n";
        else if(count==1)cout<<"1 carry operation.\n";
        else cout<<count<<" carry operations.\n";
    }
}
