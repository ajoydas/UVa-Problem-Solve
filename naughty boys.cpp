#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
ll power(ll n,ll p)
{
    ll sum=1;
    for(int i=1;i<=p;i++){
        sum*=n;
    }
    return sum;
}
int main()
{
    long long n,m=0;
    cin>>n;
    long long num=0,sum=0;
    while(1){
            bool flag=false;
        /*if(n<10){sum=n;
        break;}
        else if(n-num<9*power(10,m)){
            sum+=(n-num+1)*(m+1);
            break;
        }*/

        if(n<10){cout<<n<<endl;
        break;}
        sum=sum+9*power(10,m)*(m+1);
        if(sum>=n){
            num=power(10,m+1);
            sum=sum-9*power(10,m)*(m+1);
            while(1){
                ll m=num;
                while(m>0){
                    m/=10;
                    sum++;
                    cout<<sum<<" "<<num<<endl;
                    if(sum==n){cout<<m%10<<endl;
                    flag=true;
                    break;}
                }
            if(flag==true) break;
            }
        }
        m++;
        if(flag==true)break;

    }
}
