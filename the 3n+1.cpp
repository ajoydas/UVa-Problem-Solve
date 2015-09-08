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
    long int i,j;
    while(scanf("%ld %ld",&i,&j)!=EOF){
    long int n,max=0,count,start,end;
    if(i<j){start=i;
    end=j;}
    else {start=j;
    end=i;}
    for(n=start;n<=end;n++){
    long int temp=n;
    count=1;
    while(n!=1){
        if(n%2==1)n=3*n+1;
        else n=n/2;
        count++;
    }
    n=temp;
    if(max<count)max=count;
}
printf("%ld %ld %ld\n",i,j,max);
}

}
