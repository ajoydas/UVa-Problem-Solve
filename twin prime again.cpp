#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ms0(a) memset(a,0,sizeof(a))
#define msn(a,n) memset(a,n,sizeof(a))
#define until(i,n) for(__typeof(n)i=0;i<n;i++)
#define For(i,n) for(__typeof(n)i=1;i<=n;i++)
#define init(i,a,n) for(i=0;i<n;i++)a[i]=i
#define inf ll_MAX
#define ll long long
#define llu long long unsigned
#define db double
#define ldb long double
#define sq(x) ((x)*(x))
#define all(x) sort(x.begin(),x.end())
#define CS prllf("Case %d: ",cs++)
#define PI 3.1415926535897932384626433832795
#define II ({ll a; scanf(" %d", &a); a;})
#define DD ({DB a; scanf(" %lf", &a); a;})
#define LL ({LL a; scanf(" %lld", &a); a;})
#define forstl(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)

vector<ll>arr;
//memset(arr, 0, arr.size());
vector<vector<ll> >matr;
vector<ll>v;

/*void markMultiples(vector<ll>& arr, ll a, ll n)
{
	ll i = 2, num;
	while ( (num = i*a) <= n )
	{
		arr[ num-1 ] = 1; // minus 1 because index starts from 0.
		++i;
	}
}

// A function to prll all prime numbers smaller than n
void SieveOfEratosthenes()
{
    ll n=20000000;
    //cout<<n;
	// There are no prime numbers smaller than 2
	if (n >= 2)
	{
		// Create an array of size n and initialize all elements as 0

		/* Following property is mallained in the below for loop
		arr[i] == 0 means i + 1 is prime
		arr[i] == 1 means i + 1 is not prime
		for (ll i=1; i<n; ++i)
		{
			if ( arr[i] == 0 )
			{
				//(i+1) is prime, prll it and mark its multiples
				//printf("%lld ", i+1);
				markMultiples(arr, i+1, n);
			}
		}
	}
}
*/
void SieveOfEratosthenes()
{
    ll n=20000000;
    for (ll i=3; i<n; i+=2)
		{
			if ( arr[i] == 1 )
			{
				//markMultiples(arr, i+1, n);
				int j=2;
				while(j*i<=n){
				    arr[j*i]=0;
				    j++;
				}
			}
		}
}

int main()
{
    ll n,count=0,t=0,n1=1,n2;
    for(ll i=0;i<20000000;i++){arr.push_back(1);}
    SieveOfEratosthenes();
    while(cin>>n){
        if(cin.eof()==1)break;
        if(count<n){
        while(1){
            if(count==n)break;
            //cout<<"Loop 1"<<endl;
            if(count==0){
                for(ll i=3;;i+=2){
                    n2=arr[i+2];
                    //cout<<"Loop 2 "<<n2<<endl;
                    if(n1==1 && n2==1){
                            //cout<<i<<" "<<i+2<<endl;
                        matr.push_back(v);
                        matr.at(count).push_back(i);
                        matr.at(count).push_back(i+2);
                        count++;
                        t=i+2;
                        n1=n2;
                        break;
                    }
                n1=n2;
                }
            }
        if(count==n)break;
            if(count>0){
                for(ll i=t;;i+=2){
                        n2=arr[i+2];
                    //cout<<"Loop 3"<<endl;
                    if(n1==1 && n2==1){
                        matr.push_back(v);
                        matr.at(count).push_back(i);
                        matr.at(count).push_back(i+2);
                        count++;
                        t=i+2;
                        n1=n2;
                        break;
                    }
                    n1=n2;
                }
            }
        }
    }

    printf("(%lld, %lld)\n",matr[n-1][0],matr[n-1][1]);

    }
}
