//cout <<right << setw(5) << 6000 <<endl;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,print=1;
    while( cin>>n){
        if(n==0){cout<<"END OF OUTPUT\n";
                break;}
        if(print==1){
            cout<<"PERFECTION OUTPUT\n";
            print=0;
        }
        int sum=1;
        string s;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)sum+=n/i+i;
        }
        if(sum==n)s="PERFECT";
        else if(sum<n)s="DEFICIENT";
        else s="ABUNDANT";
        if(n==1)s="DEFICIENT";
        cout <<right << setw(5) <<n<<"  "<<s<<endl;
    }
}
