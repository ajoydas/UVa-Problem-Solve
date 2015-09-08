
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
    int count=0;
    while(getline(cin,s)){
        count=7;
        if(cin.eof()==true)break;
        for(int i=0;i<s.size();i++)s[i]-=count;

        cout<<s<<endl;
    }
}



