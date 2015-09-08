#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sh,eh,sm,em;
    while(cin>>sh>>sm>>eh>>em){
        if(sh==0&&eh==0&&sm==0&&em==0)break;
        if(sh>eh|| (sh==eh&& em<sm))cout<<(23-sh)*60+(60-sm)+eh*60+em<<endl;
        else cout<<(eh-sh-1)*60+(60-sm)+em<<endl;
    }
}

