#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,max=0,num;
        cin>>num;
        while(num--){
            cin>>n;
            if(n>max)max=n;
        }
        printf("Case %d: %d\n",i,max);
    }
}
