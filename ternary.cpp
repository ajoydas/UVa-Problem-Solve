#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n<=-1)break;
        string s="";
        if(n==0)s="0";
        while(n>0){
            s+=n%3+'0';
            n/=3;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}


