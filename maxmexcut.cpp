#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;


int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;

        string a,b; cin>>a>>b;

        ll mex=0;
        int removed=0;
        string remaining="";
        
        for(int i=0;i<n;i++)
        {
            if((a[i]=='0'&&b[i]=='1')||(a[i]=='1'&&b[i]=='0')) 
            {
                mex+=2;
                removed++;
                remaining.push_back('2');
            }
            else remaining.push_back(a[i]);
        }
       
        //cout<<a<<"\t"<<b<<"\t"<<remaining<<"\n";
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
                if(remaining[i]=='0') mex++;
            }
            else
            {
                if(remaining[i]=='0')
                {
                    mex++;
                    if(remaining[i+1]=='1')
                    { 
                        mex++;
                        i++;
                    }
                }
                else if(remaining[i]=='1')
                {
                    if(remaining[i+1]=='0')
                    {
                        mex+=2;
                        i++;
                    }
                }
            }
        }
        cout<<mex<<"\n"; 
    }
    return 0;
}
