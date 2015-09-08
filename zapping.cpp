#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b){
        if(a==-1 && b==-1)break;
        if(a>b){
            int def1=a-b,def2=(100-a)+(b-0);
            if(def1<def2)cout<<def1<<endl;
            else cout<<def2<<endl;
        }

        else {
            int def1=b-a,def2=(100-b)+(a-0);
            if(def1<def2)cout<<def1<<endl;
            else cout<<def2<<endl;
        }
    }

}
