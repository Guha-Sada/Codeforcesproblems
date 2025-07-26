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

int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin>>t;

    while (t--) 
    {
        int n; cin>>n;
        vpi coords(n);
        multiset<int> xs,ys;
        for(auto &x: coords)
        {
            cin>> x.first >> x.second;
            xs.insert(x.first);
            ys.insert(x.second);
        }

        if(n==1)
        {
            cout<<1<<"\n";
            continue;
        }
            
        ll curr_area=1ll*(*xs.rbegin()-*xs.begin()+1)*(*ys.rbegin()-*ys.begin()+1);

        for(int i=0;i<n;i++)
        {
            auto [x,y]=coords[i];
            xs.erase(xs.find(x)); 
            ys.erase(ys.find(y));

            if(xs.size())
            {
                ll len=*xs.rbegin()-*xs.begin()+1, bre=*ys.rbegin()-*ys.begin()+1;

                if(len*bre>=n) curr_area=min(curr_area,len*bre);
                else curr_area=min({curr_area,(len+1)*bre,len*(bre+1)});
            }
            xs.insert(x);
            ys.insert(y);
        }
        cout<<curr_area<<"\n";
    }
    return 0;
}

