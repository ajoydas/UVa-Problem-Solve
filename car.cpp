#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int test=1;
    while(cin>>n){
            if(n==0)break;
        if(n==1){
            double u,v,t,s,a;
            cin>>u>>v>>t;
            s=((u+v)/2)*t;
            a=((v-u)/t);
            printf("Case %d: %0.3lf %0.3lf\n",test++,s,a);
        }
        else if(n==2){
            double u,v,t,s,a;
            cin>>u>>v>>a;
            s=(v*v-u*u)/(2*a);
            t=((v-u)/a);
            printf("Case %d: %0.3lf %0.3lf\n",test++,s,t);
        }
        else if(n==3){
            double u,v,t,s,a;
            cin>>u>>a>>s;
            v=sqrt(u*u+2*a*s);
            t=((v-u)/a);
            printf("Case %d: %0.3lf %0.3lf\n",test++,v,t);
        }
        else if(n==4){
            double u,v,t,s,a;
            cin>>v>>a>>s;
            u=sqrt((v*v-2*a*s));
            t=((v-u)/a);
            printf("Case %d: %0.3lf %0.3lf\n",test++,u,t);
        }
    }
}
