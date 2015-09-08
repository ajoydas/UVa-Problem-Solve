#include <bits/stdc++.h>
using namespace std;

bool pairsort(const pair<int,int>&a,const pair<int,int>&b)
{
    if(a.first>b.first)return true;
    else if(a.first==b.first&& a.second<b.second)return true;
    else return false;
}

int main()
{
    int n,i,j,temp;
    cin>>n;
    string s[n];
    vector<pair<int,int> >letters;

    for(i=0;i<26;i++){
        letters.push_back(pair<int,int>(0,i));
    }
    getline(cin,s[0]);
    for(i=0;i<n;i++){
            getline(cin,s[i]);
            for(j=0;j<s[i].size();j++){
                if(s[i][j]>='a'){temp=s[i][j]-97;
                letters[temp].first+=1;}
                else if(s[i][j]>='A' && s[i][j]<='Z'){temp=s[i][j]-65;
                letters[temp].first+=1;}
            }
    }
    sort(letters.begin(),letters.end(),pairsort);
    for(i=0;i<26;i++){
        if(letters[i].first!=0)printf("%c %d\n",letters[i].second+65,letters[i].first);
    }

}
