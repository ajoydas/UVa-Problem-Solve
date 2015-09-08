#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[]={"BCG","BGC","CBG","CGB","GBC","GCB"},s1;
    long long B[3],G[3],C[3];
    while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&B[0],&G[0],&C[0],&B[1],&G[1],&C[1],&B[2],&G[2],&C[2])!=EOF){
        long long mn=LONG_LONG_MAX,sum;
        for(int j=0;j<6;j++){
                sum=0;
        for(int i=0;i<3;i++){
            if(s[j][i]=='B')sum+=B[0]+B[1]+B[2]-B[i];
            else if(s[j][i]=='G')sum+=G[0]+G[1]+G[2]-G[i];
            else sum+=C[0]+C[1]+C[2]-C[i];
        }
        if(mn>sum){
            mn=sum;
            s1=s[j];}
    }
    cout<<s1<<" "<<mn<<endl;
}
}
