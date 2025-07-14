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

const int MOD= 998244353;

vi power_of_2(1e5);

void power_of_2_mod()
{
    power_of_2[0]=1;
    for(int i=1;i<1e5;i++) power_of_2[i]=power_of_2[i-1]*2% MOD;
}

int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin>>t;
    power_of_2_mod();
    while (t--) 
    {
        int n; cin>>n;

        vi p(n),q(n);

        for(auto &x:p) cin>>x;
        for(auto &x:q) cin>>x;

        int p_idx=0,q_idx=0;

        for(int i=0;i<n;i++)
        {
            if(p[i]>p[p_idx]) p_idx=i;
            if(q[i]>q[q_idx]) q_idx=i;

            if(p[p_idx]==q[q_idx]) cout<<(power_of_2[p[p_idx]]+power_of_2[max(p[i-q_idx],q[i-p_idx])])%MOD<<" ";

            else cout<<(p[p_idx]>q[q_idx] ? (power_of_2[p[p_idx]] + power_of_2[q[i-p_idx]]) % MOD : (power_of_2[q[q_idx]]+power_of_2[p[i-q_idx]]) % MOD )<<" ";
        }
        cout<<"\n";

    }
    return 0;
}

