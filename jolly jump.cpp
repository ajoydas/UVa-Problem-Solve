#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int temp,priv,num[n+1],i;
        bool flag=false;
        for(i=1;i<=n-1;i++)num[i]=0;
        cin>>priv;
        for(i=2;i<=n;i++){
            cin>>temp;
            if(abs(temp-priv)<n)num[abs(temp-priv)]= 1;
            else flag=true;
            priv=temp;
        }
        for(i=1;i<=n-1;i++){
            if(num[i]!=1)break;
        }
        if(i!=n||flag==true)printf("Not jolly\n");
        else printf("Jolly\n");
    }
}
