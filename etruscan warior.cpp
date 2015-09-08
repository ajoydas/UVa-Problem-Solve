#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double n;
        cin>>n;
        cout<<(int)((sqrt(1+8*n)-1)/2)<<endl;
    }
}
