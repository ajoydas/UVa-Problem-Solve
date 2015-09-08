#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0,add;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="donate"){
            cin>>add;
            sum+=add;
        }
        else cout<<sum<<endl;

    }
}

