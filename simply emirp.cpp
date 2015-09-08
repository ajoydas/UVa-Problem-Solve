#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int number)
{	int i;

	for (i=2; i<=sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}
int  StringToNumber ( const string &Text )
{
	stringstream ss(Text);
	int result;
	return ss >> result ? result : 0;
}


int main()
{
    int n;
    while(cin>>n){
        if(cin.eof())break;
        int num=n;
        if(IsPrime(num)){
            string s="";
            while(num>0){
                s+='0'+num%10;
                num/=10;
            }
            if(StringToNumber(s)!=n && IsPrime(StringToNumber(s)))cout<<n<<" is emirp."<<endl;
            else cout<<n<<" is prime.\n";
        }
        else cout<<n<<" is not prime.\n";
    }

}



