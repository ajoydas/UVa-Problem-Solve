#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int xy,x_y,x,y;
        cin>>xy>>x_y;
        x=(xy+x_y)/2;
        y=(xy-x_y)/2;
        if(xy>=x_y &&x*2==xy+x_y && y*2==x+y-x_y)cout<<x<<" "<<y<<endl;
        else cout<<"impossible\n";
    }
}


