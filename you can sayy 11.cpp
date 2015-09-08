#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        if(s=="0")break;
        int mod=0;
        for(int i=0;i<s.size();i++){
            mod=(mod*10+(s[i]-'0'))%11;
        }
        if(!mod)cout<<s<<" is a multiple of 11.\n";
        else cout<<s<<" is not a multiple of 11.\n";
    }
}

