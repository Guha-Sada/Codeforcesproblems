//I read the editorial and realised my mistake. Now, I am accounting for all medians in a range of 2 and 3. 
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;

int main()
{
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

        int t;cin>>t;

        while(t--)
        {
                int n;cin>>n;

		vll a(n);
		for(int i=0;i<n;i++)cin>>a[i];
	
		vll meds;

		for(int i=0;i<n-1;i++) meds.push_back(min(a[i],a[i+1]));
		for(int i=0;i<n-2;i++) meds.push_back(min(a[i],a[i+2]));
		sort(meds.begin(),meds.end());
		cout<<*(meds.end()-1)<<"\n";
	}
        return 0;
}
