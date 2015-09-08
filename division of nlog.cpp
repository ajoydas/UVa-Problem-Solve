#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)){
        if(t==0)break;
        int cx,cy;
        cin>>cx>>cy;
        while(t--){
                int x,y;
            cin>>x>>y;
            if(x==cx||y==cy)cout<<"divisa\n";
            else if(x>cx && y>cy)cout<<"NE\n";
            else if(x>cx && y<cy)cout<<"SE\n";
            else if(x<cx && y<cy)cout<<"SO\n";
            else cout<<"NO\n";
        }
    }
}
