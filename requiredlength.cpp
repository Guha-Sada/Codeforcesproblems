#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

const ll inf=10e17;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
    ll n,x; cin>>n>>x;
    
    map<ll,ll> level;
    queue<ll> x_mults;
    
    level[x]=0;
    x_mults.push(x);

    ll out=-1;

    while(!x_mults.empty())
    {
        ll curr=x_mults.front();
        x_mults.pop();

        if(ll(to_string(curr).length())==n)
        {
            out=level[curr];
            break;
        }

        ll temp=curr;
        while(temp)
        {
            ll ones=temp%10;//long long becuase it will be used to check key value soon.

            if(!level.count(ones*curr))
            {
                x_mults.push(ones*curr);
                level[ones*curr]=level[curr]+1;
            }
            
            temp/=10;
        }
    }
   
    cout<<out<<"\n";
    return 0;
}
