#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s,s1="one",s2="two";
        cin>>s;
        int count1=0,count2=0;
        if(s.size()==3){
            for(int j=0;j<=2;j++){
                if(s[j]==s1[j])count1++;
                if(s[j]==s2[j])count2++;
            }
            if(count1>=2)cout<<1<<endl;
            else if(count2>=2)cout<<2<<endl;
        }
        else cout<<3<<endl;
    }
}

