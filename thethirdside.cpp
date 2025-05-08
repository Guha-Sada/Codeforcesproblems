//1009div3 B
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;


int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t;cin>>t;

	while(t--)
	{
        int n; cin>>n;
        vll a(n);

        for(auto &x:a) cin>>x;
        
        if(n==1) 
        {
            cout<<a[0]<<"\n";
            continue;
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        
        stack<ll> triangles;
        for(int x:a) triangles.push(x);

        while(triangles.size()>1)
        {
            int a=triangles.top();
            triangles.pop();
            int b=triangles.top();
            triangles.pop();
            triangles.push(a+b-1);
        }

        cout<<triangles.top()<<"\n";
    }

	return 0;
}
