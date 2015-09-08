#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while( cin>>n){
            int count=0;
        if(n==0)break;
        while(n>=3){
            count+=n/3;
            n=n/3+n%3;
            if(n==2)n+=1;

        }
        cout<<count<<endl;
    }
}


