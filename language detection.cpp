#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    string s,s1[6][2]={"HELLO","ENGLISH",
    "HOLA","SPANISH",
    "HALLO","GERMAN",
    "BONJOUR","FRENCH",
    "CIAO","ITALIAN",
    "ZDRAVSTVUJTE","RUSSIAN"};
    while(cin>>s){
        if(s=="#")break;
        int flag=0;
        for(int i=0;i<6;i++){
            if(s==s1[i][0]){
                    cout<<"Case "<<t<<": "<<s1[i][1]<<endl;
                flag=1;
            break;
            }
        }
        if(!flag)cout<<"Case "<<t<<": "<<"UNKNOWN"<<endl;
        t++;
    }
}



