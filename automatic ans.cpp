#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n=(315*n+36962)/10;
        cout<<abs(n%10)<<endl;
    }
}
