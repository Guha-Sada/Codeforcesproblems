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

/*
vector<bool> sieve(1e5+1,true);

void Eratosthenes()
{
    sieve[1]=false;
    for(int i=2;i*i<1e5+1;i++)
    {
        if(!sieve[i]) continue;
        for(int j=i*i;j<1e5+i;j+=i) sieve[j]=false;
    }
}
*/ 

int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    //Eratosthenes();

    int t; cin>>t;
    while (t--) 
    {
        int n; cin>>n;
       
        if(n<4)
        {
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<"\n";
            continue;
        }

        vi out(n+1);
        iota(out.begin(),out.end(),0);

        for(int i=n;i>=2;i--)
        {
            int swapper=2;
            while(swapper*swapper<=i && i%swapper) swapper++;

            if(swapper*swapper <= i ) swap(out[i/swapper],out[i]); 
        }

        for(int i=1;i<=n;i++) cout<<out[i]<<" ";
        cout<<"\n";

    }
    return 0;
}

