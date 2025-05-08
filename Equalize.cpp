#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int n; cin>>n;

    string a,b; cin>>a>>b;

    int cost=0;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            if(a[i]!=b[i]) cost++;
            break;
        }
        
        if(a[i]!=b[i])
        {
            cost++;
            if(a[i+1]!=b[i+1]&&a[i+1]!=a[i])i++;    
        }
    }
    
    cout<<cost<<"\n";

	return 0;
}
