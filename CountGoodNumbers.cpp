#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

//vi count_dd_primes(1e18+1);

/*
void calc_dd_primes()
{
    bool flag;
    for(int i=1;i<11;i++) count_dd_primes[i]=0;
    for(ll i=11;i<1e18+1;i+=2)
    {   
        if(i%2&&i%3&&i%5&&i%7) flag=false;
        else flag=true;
        
        count_dd_primes[i]=count_dd_primes[i-1]+(flag?0:1);
    }
}
*/

ll find_bad(ll n)
{
    return n - n/2 - n/3 - n/5- n/7 + n/6 + n/10 + n/14 + n/15 + n/21 + n/35 - n/30 - n/42 - n/70 - n/105 + n/210;
}

int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    //calc_dd_primes();

    int t; cin>>t;

    vi s_primes;
    for(auto &x: s_primes) cout<<x<<" ";

    while (t--) 
    {
        ll l,r; cin>>l>>r;
        cout<<find_bad(r)-find_bad(l-1)<<"\n";
        //cout<<count_dd_primes[r]-count_dd_primes[l-1]<<"\n";
    }
    return 0;
}

