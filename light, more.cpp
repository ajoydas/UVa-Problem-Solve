#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    while(scanf("%ld",&n)){
            if(n==0)break;
            long x=sqrt(n);
        if(x*x==n)cout<<"yes\n";
        else cout<<"no\n";
    }
}
