#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,big=0;
        double total=0,avg;
        cin>>n;
        double num[n];
        for(int i=0;i<n;i++){
            cin>>num[i];
            total+=num[i];
        }
        avg=total/n;
        for(int i=0;i<n;i++){
            if(num[i]>avg)big++;
        }
        printf("%0.3lf%%\n",((double)big/(double)n)*100);

    }
}
