#include<bits/stdc++.h>
using namespace std;
#define ll long long
string NumberToString (ll n )
{
	stringstream ss;
	ss << n;
	return ss.str();
}
ll StringToNumber ( const string &Text )
{
	stringstream ss(Text);
	ll result;
	return ss >> result ? result : 0;
}
int main()
{
    ll t,n,sum,n1,n2,count;
    string s1,s2;
    cin>>t;
    while(t--){
        count=0;
        cin>>s1;
        while(1){
            s2=s1;
            reverse(s2.begin(),s2.end());
            if(s1==s2)break;
            count++;
            n1=StringToNumber(s1);
            n2=StringToNumber(s2);
            s1=NumberToString(n1+n2);
        }
    cout<<count<<" "<<s1<<endl;
    }
}
