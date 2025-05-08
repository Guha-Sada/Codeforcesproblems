//976div2 problemA

#include<bits/stdc++.h>

int main()
{
	using namespace std;
	int t,n,k,count;
	cin>>t;

	while(t--)
	{
		cin>>n>>k;

		if(k==1||n<k)
			cout<<n<<"\n";
		else if(n==k)
			cout<<"1\n";
		else
		{
			count=0;
			while(n)
			{
				count+=n%k;
				n/=k;
			}	
			cout<<count<<"\n";	
		}
	}
	return 0;
}
