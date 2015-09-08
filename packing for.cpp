#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int l,w,h;
        cin>>l>>w>>h;
        if(l>20||h>20||w>20)printf("Case %d: bad\n",i);
        else printf("Case %d: good\n",i);
    }
}


