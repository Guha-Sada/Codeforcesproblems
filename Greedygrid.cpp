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
        int n,m; cin>>n>>m;

        cout<<((n>1&&m>2)||(n>2&&m>1)?"Yes":"No")<<"\n";

    }
    return 0;
}

