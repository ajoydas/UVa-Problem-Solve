#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    while(cin>>n){
        if(n==-1)break;
        long int f=1,m=0;
        for(int i=1;i<=n;i++){
            long int temp=m;
            m=m+f;
            if(i>1)f=temp+1;
        }
        cout<<m<<" "<<m+f<<endl;
    }
}
