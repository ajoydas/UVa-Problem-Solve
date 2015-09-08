#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,princoun=1;
    while(cin>>n){
        if(n<0)break;
        int print=1,have=n,enter[12],need[12];
        for(int i=0;i<12;i++)cin>>enter[i];
        for(int i=0;i<12;i++)cin>>need[i];
        for(int i=0;i<12;i++){
                if(print==1){printf("Case %d:\n",princoun++);
                    print=0;
                }
                if(have>=need[i]){cout<<"No problem! :D\n";
                have-=need[i];}
                else cout<<"No problem. :(\n";
                have+=enter[i];
        }
    }
}

