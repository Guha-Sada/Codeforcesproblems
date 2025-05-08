//Read the editorial
#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;    
typedef vector<vector<int>> vvi;  
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;     
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;cin>>t;

    while(t--)
    {
        int n; cin>>n;
        
        set<int> divisors;

        int c=0;
        for(int i=2;i*i<=n;i++)
        {
            if(!(n%i))
            {
                divisors.insert(i);
                n/=i;
                c++;
                if(c==2) break;
            }   
        }
        
        if(n==1||divisors.count(n)||int(divisors.size())<2) cout<<"NO\n";
        else 
        {
            cout<<"YES\n";
            divisors.insert(n);
            for(auto x:divisors) cout<<x<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
