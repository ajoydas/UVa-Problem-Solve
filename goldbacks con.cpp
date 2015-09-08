#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int number)
{	int i;

	for (i=3; i<=sqrt(number); i+=2)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
    int n;
    while(cin>>n){
        if(n==0)break;
        int a=3,b;
        while(1){
            if(IsPrime(a)){
                b=n-a;
                if(IsPrime(b)){
                        printf("%d = %d + %d\n",n,a,b);
                        break;
            }
        }
        a+=2;


    }
}
}



