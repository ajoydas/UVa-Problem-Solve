#include<bits/stdc++.h>
using namespace std;
string s[]= {"BCG","BGC","CBG","CGB","GBC","GCB"},ans;
int bin[3][3];
int main()
{
    int one;
    while(cin>>one)
    {

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(!i && !j) bin[i][j]=one;
                else cin>>bin[i][j];
            }
        }
        int mn=INT_MAX;
        for(int i=0; i<6; i++)
        {
            int cnt=0;
            for(int j=0; j<3; j++)
            {
                if(s[i][j]=='B')
                {
                    cnt+=bin[0][0]+bin[1][0]+bin[2][0]-bin[j][0];
                }
                else if(s[i][j]=='C')
                {
                    cnt+=bin[0][2]+bin[1][2]+bin[2][2]-bin[j][2];
                }
                else
                {
                    cnt+=bin[0][1]+bin[1][1]+bin[2][1]-bin[j][1];
                }
            }
            if(cnt<mn)
            {
                mn=cnt;
                ans=s[i];
            }
        }
        cout<<ans<<" "<<mn<<endl;
    }
}
