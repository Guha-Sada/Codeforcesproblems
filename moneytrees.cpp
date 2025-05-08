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
        ll n,k; cin>>n>>k;
        vll a(n),h(n);
        for(auto &x:a) cin>>x;
        for(auto &x:h) cin>>x;
        
        int l=0, r=0, fruits=0, max_sub=0;
        
        while(r<n)      
        {
            fruits+=a[r];
            while(l<=r && fruits>k) fruits-=a[l++];  //Updating window if number of fruits exceeds k
            
            if(r)
            {
                if(l<r&&h[r-1]%h[r])
                {
                    l=r;
                    fruits=a[r];
                }
            }

            max_sub=max(max_sub,r-l+1);
            r++;
        }
        cout<<max_sub<<"\n";
    }
    return 0;
}
