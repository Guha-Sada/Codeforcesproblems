#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <climits>
#include <algorithm>

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
        int n,k; cin >> n >> k;

        string s; cin >> s;
        vi freq(2,0);
        for(int i=0;i<n;i++) freq[s[i]-'0']++;
       
        //cout<<"\n"<<freq[0]<<" "<<freq[1]<<"\n";

        if(freq[1]<=k)
        {
            cout<<"Alice\n";
            continue;
        }

        cout<<(n>=2*k?"Bob":"Alice")<<"\n"; 

    }
    return 0;
}
