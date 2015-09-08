
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
#define max 10000
int main()
{
    string s;
    long long count=0;
    while(getline(cin,s)){
        if(cin.eof()==true)break;
        for(int i=0;i<s.size();i++){
            if(s[i]=='"'){count++;
            if(count%2==1){s[i]='`';
            s.insert(i+1,1,'`');}
            else {s[i]='\'';
            s.insert(i+1,1,'\'');}}
        }
        cout<<s<<endl;
    }
}


