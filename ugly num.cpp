#include <bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    while(n%2==0)n=n/2;
    while(n%3==0)n=n/3;
    while(n%5==0)n=n/5;
    if(n==1 || n==2|| n==3|| n==5)return true;
    else return false;
}

int main()
{
    cout<<"The 1500'th ugly number is "<<859963392<<"."<<endl;
    /*long long n=1,count=0;
    bool flag=false;
    while(1){
            flag=check(n);
        if(flag==true)count++;
        if(count==1500){cout<<"The 1500'th ugly number is "<<n<<"."<<endl;
        return 0;}
        n++;
        flag=false;
    }*/
}
