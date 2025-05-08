//Read the Editorial. 
#include<bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t;cin>>t;

	while(t--)
	{
        ll x; cin>>x;

        vll res(31);
        for(int i=0; i<31;i++)
        {
            if(1ll&(x>>i)) //Check if i-th bit is 1
            {
                if(res[i]) 
                {
                    res[i+1]=1;
                    res[i]=0;
                }
            
                else if(i)
                {
                    if(res[i-1]==1) //
                    {
                        res[i-1]=-1;
                        res[i+1]=1;
                    }
                    else res[i]=1; 
                }
                else if(!i) res[i]=1;
            }
        }
        
        cout<<"31\n";
        for(int i=0;i<31;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    
    }

	return 0;
}
