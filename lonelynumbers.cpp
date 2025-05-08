
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;


vi count_sieve()
{
	int n=10e6;

	vector<bool> is_prime(n+1,true),square_of_prime(n+1,false);
	
	square_of_prime[1]=true;
	for(int i=2;i*i<=n;i++)
	{
		if(is_prime[i])
		{
			square_of_prime[i*i]=true;
			for(int j=i*i;j<=n;j+=i) is_prime[j]=false;	
		}
	}

	vi count_lonely(n+1);
	count_lonely[1]=1;
	int count=1;
	for(int i=2;i<=n;i++)
	{
		if(is_prime[i]) count++;

		if(square_of_prime[i])count--;

		count_lonely[i]=count;
	}
	return count_lonely;
}


int main()
{
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	vi pre_prime_counts=count_sieve();
        
	//for(int i=1;i<31;i++) cout<< pre_prime_counts[i]<<" ";

	
        int N;cin>>N;
		
	vi nums(N);
	for(int i=0;i<N;i++)
	{
		cin>>nums[i];
		cout<<pre_prime_counts[nums[i]]<<"\n";	
	}		

        return 0;
}

