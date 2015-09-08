#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="";
    while(getline(cin,s)){
        if(cin.eof())break;
        s1="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(s1.begin(),s1.end());
                cout<<s1<<" ";
                s1="";
            }
            else s1+=s[i];

            if(i==s.size()-1){
                reverse(s1.begin(),s1.end());
                cout<<s1;
            }
        }
        cout<<"\n";
    }
}


