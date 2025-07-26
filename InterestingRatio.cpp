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

vector<bool> sieve(1e7+1,true);

void sieve_of_E()
{
    sieve[1]=false;
    for(int i=2;i*i<1e7+1;i++)
    {
        if(!sieve[i]) continue;
        for(int j=i*i;j<1e7+1;j+=i) sieve[j]=false;
    }
}


int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    sieve_of_E();
    int t; cin>>t;
    
    while (t--) 
    {
        int n; cin>>n;
        
        ll score=0;
        for(int i=2;i<=n;i++)
        {
            if(sieve[i]) score+=n/i;
        }

        cout<<score<<"\n";
    }
    return 0;
}

