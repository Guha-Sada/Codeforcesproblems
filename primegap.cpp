#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;
typedef vector<bool> vb;
vb sieve()
{
    int n=10e6;
    vb primes(n+1,true);
    primes[0]=false;

    for(int i=2;i*i<=n;i++)
    {
        if(primes[i])
            for(int j=i*i;j<=n;j+=i) primes[j]=false;
    }
    return primes;
}


int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
    vb primes=sieve();

	int t;cin>>t;

	while(t--)
	{
        int l,r; cin>>l>>r;

        int min_diff=1e6+2,last_prime=0;
        bool first_prime_found=false;
        for(int i=l;i<=r;i++)
        {
            if(primes[i])
            {
                if(first_prime_found) min_diff=min(min_diff,i-last_prime);
                else first_prime_found=true;
                    
                last_prime=i;
            }
        }

        cout<<(min_diff==1e6+2?-1:min_diff)<<"\n";
    }

	return 0;
}
