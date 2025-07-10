#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>

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
        int n;
        ll k; 

        cin>>n>>k;

        vi a(n);
        vector<string> s;
        ll score=0;
        for(auto &x:a)
        {
            cin>>x;
            score+=__builtin_popcount(x);
            s.push_back(bitset<64>(x).to_string());
        }
        
        for(int i=0;i<64;i++)
        {
            ll cost= 1ll*pow(2,i);
            
            if(cost>k) break;

            for(int j=0;j<n;j++)
            {
                if(s[j][63-i]=='0')
                {
                    score++;
                    k-=cost;
                }
                if(cost>k) break;
            }
        }
        
        cout<<score<<"\n";
    }
    return 0;
}
