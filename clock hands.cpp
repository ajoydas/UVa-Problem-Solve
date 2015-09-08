#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  h,m;
    char c;
    while(cin>>h>>c>>m){
        if(h==0 && m==0)break;
        double angle=abs(.5*(60*(double)h-11*(double)m));
        if(angle>=180)printf("%0.3lf\n",360-angle);
        else printf("%0.3lf\n",angle);
    }
}

