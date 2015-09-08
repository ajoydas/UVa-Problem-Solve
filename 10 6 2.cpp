#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double l,r,cir,w;
        cin>>l;
        r=l/5;
        w=(l/10)*6;
        cir=2*acos(0)*r*r;
        printf("%0.2lf %0.2lf\n",cir,l*w-cir);
    }
}


