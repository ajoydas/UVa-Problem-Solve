#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,party,count=0,num;
        cin>>n>>num;
        int days[n+2];
        for(i=1;i<=n;i++)days[i]=0;
        for(i=1;i<=num;i++){
            cin>>party;
            int mult=1;
            while(party*mult<=n){
                days[party*mult]=1;
                mult++;
            }

        }

        for(i=1;i<=n;i++){
            if(days[i]==1&& (i-6)%7!=0 && (i-7)%7!=0)count++;}
        cout<<count<<endl;
    }
}
