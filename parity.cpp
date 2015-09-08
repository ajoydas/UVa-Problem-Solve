#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t){
        if(t==0)break;
        int count=0;
        string s="";
        while(t>0){
            if(t%2==1)count++;
                s+=(t%2)+'0';
                t/=2;
        }
        reverse(s.begin(),s.end());
        cout<<"The parity of "<<s<<" is "<<count<<" (mod 2)."<<endl;
    }
}
