#include <bits/stdc++.h>
using namespace std;
bool leap(long long n)
{
    if(n%4!=0)return false;
    if(n%100==0 && n%400!=0)return false;
    else return true;
}
int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF){
        if(leap(n)==true)cout<<"This is leap year.\n";
        if(n%15==0)cout<<"This is huluculu festival year.\n";
        if(n%55==0 && leap(n)==true)cout<<"This is bulukulu festival year.\n";
        if(leap(n)==false and n%15!=0)cout<<"This is an ordinary year.\n";
        cout<<"\n";
    }
}

