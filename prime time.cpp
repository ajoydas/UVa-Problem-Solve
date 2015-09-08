#include <bits/stdc++.h>
using namespace std;
bool status[1100002];
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;

}
int main()
{
    int count=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        count=0;
        for(int i=a;i<=b;i++){
            for(int j=0;j<4149;j++){
                if(i==num[j]){count++;break;}
            }
        }
        printf("%0.2lf\n",((double)count/(double)(b-a+1))*100.0);
    }
}
