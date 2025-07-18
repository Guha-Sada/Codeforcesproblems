#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>
#include <queue>

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
        int n,k; cin>>n>>k;

        vvi casinos(n,vi(3));

        for(auto &x:casinos) cin>>x[0]>>x[1]>>x[2];

        sort(casinos.begin(),casinos.end());
        
        for(int i=0;i<n;i++)
        {
            if(k>=casinos[i][0]) k=max(k, casinos[i][2]);
        }
        cout<<k<<"\n";
    }
    return 0;
}

