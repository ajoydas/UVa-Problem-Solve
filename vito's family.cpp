#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll r,sum=0,i,j,median,temp;
        cin>>r;
        vector<ll>s;
        for(i=0;i<r;i++){
                cin>>temp;
                s.push_back(temp);}
        sort(s.begin(),s.end());
        if(r/2==1)median=s[r/2];
        else median=s[(r-1)/2+((r-1)/2+1)/2];
        for(i=0;i<r;i++){
            sum+=abs(median-s[i]);
        }
        cout<<sum<<endl;
    }
}
