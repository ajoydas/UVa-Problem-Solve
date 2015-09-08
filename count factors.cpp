#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0)break;
        int num=n,i=2,priv=1,count=0;
        while(n>1){
            if(i!=priv && n%i==0)count++;
            if(n%i==0){n/=i;
            priv=i;}
            else i++;
        }
        printf("%d : %d\n",num,count);
    }
}

