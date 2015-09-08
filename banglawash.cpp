//Case 1: BANGLADESH 2 - 0
//Case 2: DRAW 0 5
//Case 3: WHITEWASH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        int n,bangla=0,www=0,tie=0,abs=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='B')bangla++;
            else if(s[i]=='W')www++;
            else if(s[i]=='T')tie++;
            else abs++;
        }
        if(n==abs)printf("Case %d: ABANDONED\n",cas);
        else if(bangla==0 &&tie==0 )printf("Case %d: WHITEWASH\n",cas);
        else if(www==0 && tie==0)printf("Case %d: BANGLAWASH\n",cas);
        else if(bangla==www)printf("Case %d: DRAW %d %d\n",cas,bangla,tie);
        else if(bangla>www)printf("Case %d: BANGLADESH %d - %d\n",cas,bangla,www);
        else printf("Case %d: WWW %d - %d\n",cas,www,bangla);
    }

}
