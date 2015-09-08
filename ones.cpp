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
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    int N=1,k=1;
    int count=1;
    while(k!=0){
        if(n>N){count++;
                N=N*10+1;}
        k=N%n;
        N=k;
    }
    cout<<count<<endl;
    }
}
