#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>
#include<string>

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
        string s; cin>>s;

        int count_t=0;
        for(auto &c:s)
        {
            if(c=='T')count_t++;
        }
        
        for(int i=0;i<count_t;i++) cout<<'T';
        for(auto &c:s) if(c!='T') cout<<c;
        cout<<"\n";
    }
    return 0;
}

