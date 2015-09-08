#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long print(0),flag(0),mod4(0),mod15(0),mod55(0),mod100(0),mod400(0),i,leap(0);
    while(cin>>s){
        if(cin.eof())break;
        if(print==1)cout<<"\n";
        print=1;
        flag=mod4=mod15=mod55=mod100=mod400=leap=0;
        for(i=0;i<s.size();i++){
            mod4=((mod4*10)+(s[i]-'0'))%4;
            mod100=((mod100*10)+(s[i]-'0'))%100;
            mod400=((mod400*10)+(s[i]-'0'))%400;
            mod15=((mod15*10)+(s[i]-'0'))%15;
            mod55=((mod55*10)+(s[i]-'0'))%55;
        }
        if((mod4==0 && mod100!=0) || mod400==0 ){
            cout<<"This is leap year.\n";
            flag=1;
            leap=1;
        }
        if(mod15==0){cout<<"This is huluculu festival year.\n";
        flag=1;}
        if(leap==1 && mod55==0)cout<<"This is bulukulu festival year.\n";
        if(!flag)cout<<"This is an ordinary year.\n";
    }
}
