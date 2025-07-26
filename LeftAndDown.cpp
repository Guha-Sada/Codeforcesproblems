#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin>>t;

    while (t--) 
    {
        ll a,b,k; cin>>a>>b>>k;

        if(k>=a&&k>=b) cout<<1<<"\n";
        else
        {
            ll g=gcd(a,b);
            //cout<<g<<"\n";
            if(g!=1)
            {
                cout<<(a/g <=k && b/g <=k ? 1:2)<<"\n";
            }
            else cout<<2<<"\n";
        }
    }
    return 0;
}
 
