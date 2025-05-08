//Read the editorial and just greedied it with the forst 2 chars.
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
        string s; cin>>s;
        
        int n=s.length(),max_good=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                bool flip=true;
                int good=0;
                for(int x=0;x<n;x++)
                {
                    if (flip && s[x]-'0'==i)
                    {
                        flip=false;
                        good++;
                    }
                    else if(!flip && s[x]-'0'==j)
                    {
                        flip=true;
                        good++;
                    }
                }
                if(i!=j&&good%2) good--;
                max_good=max(max_good,good);
            }
        }
        cout<<n-max_good<<"\n";
    }
    return 0;
}
