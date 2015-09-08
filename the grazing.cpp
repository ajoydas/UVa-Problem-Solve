#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double d,l;
        cin>>d>>l;
        double b=d/2,a=l/2;
        printf("%0.3lf\n",2*acos(0)*a*sqrt(a*a-b*b));

    }
}
