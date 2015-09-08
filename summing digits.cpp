#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0)break;
        while(n>9){
            int num=0;
            while(n>0){
                num+=n%10;
                n/=10;
            }
            n=num;
        }
        cout<<n<<endl;
    }
}

