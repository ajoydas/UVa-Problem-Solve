#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)!=EOF){
            int temp=0,count=0;
            count+=n;
        while(1){
                if(n<k)break;
                if(n>=k){
                    count+=n/k;
                    n=n/k+n%k;
                }
        }
        cout<<count<<endl;
    }
}
