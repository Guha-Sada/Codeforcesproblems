//I read the editorial, could not get the implementation right :(

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
        int n; cin>>n;

        vi d(n);
        for(auto &x: d) cin>>x;

        vi l(n), r(n),potential;
        for(int i=0;i<n;i++) cin>>l[i]>>r[i];
        
        int left=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            
            if(d[i]==-1) potential.push_back(i);
            else left+=d[i];

            while(left<l[i])
            {
                if(potential.empty())
                {
                    flag=true;
                    break;
                }

                d[potential.back()]=1;
                potential.pop_back();
                left++;
            }

            while(left+potential.size()>r[i])
            {
                if(potential.empty())
                {
                    flag=true; 
                    break;
                }

                d[potential.back()]=0;
                potential.pop_back();
            }
            if(flag) break;
        }

        if(flag) cout<<-1;
        else for(auto &x:d) cout<<max(0,x)<<" ";
        
        cout<<"\n";

    }
    return 0;
}

