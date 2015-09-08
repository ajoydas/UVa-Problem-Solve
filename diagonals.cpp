#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int t=1;
    while(cin>>n){
            if(n==0)break;
        printf("Case %d: %d\n",t++,(int)ceil(((sqrt(9+8*n)+3)/2)));
    }
}

