#include <bits/stdc++.h>
using namespace std;
string deci2bin(int n)
{
    string s="";
    while(n>0){
        s+=n%2+'0';
        n/=2;
    }
    for(int i=s.size();i<13;i++)s+='0';
    reverse(s.begin(),s.end());
    return s;
}

int hexa2deci(string s)
{
    reverse(s.begin(),s.end());
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A')count+=10*pow(16,i);
        else if(s[i]=='B')count+=11*pow(16,i);
        else if(s[i]=='C')count+=12*pow(16,i);
        else if(s[i]=='D')count+=13*pow(16,i);
        else if(s[i]=='E')count+=14*pow(16,i);
        else if(s[i]=='F')count+=15*pow(16,i);
        else count+=(s[i]-'0')*pow(16,i);
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1, sign, s2;
        cin>>s1>>sign>>s2;
        int n1=hexa2deci(s1),n2=hexa2deci(s2);
        if(sign=="+")cout<<deci2bin(n1)<<" "<<sign<<" "<<deci2bin(n2)<<" = "<<n1+n2<<endl;
        else cout<<deci2bin(n1)<<" "<<sign<<" "<<deci2bin(n2)<<" = "<<n1-n2<<endl;
    }

}
