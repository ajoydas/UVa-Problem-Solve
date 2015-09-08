#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,count1=0,count2=0,temp,num;
        cin>>n;
        temp=n;
    string s="",s1="";
    while(n!=0){
        s+=(n%2)+'0';
        n/=2;
    }
    for(i=0;i<s.size();i++){
    if(s[i]=='1')count1++;}
    while(temp>0){
        num=temp%10;
        temp/=10;
        while(num!=0){
        s1+=(num%2)+'0';
        num/=2;
    }
    }
    for(i=0;i<s1.size();i++){
    if(s1[i]=='1')count2++;}
    cout<<count1<<" "<<count2<<endl;

    }
}
