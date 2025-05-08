//Read the editorial

#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;

const int inf=1e9+7;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
    int n; cin>>n;
    
    vpi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }

    sort(a.begin(),a.end());
    
    vi dp(n+1,inf),prev_team(n+1,-1);
    dp[0]=0;

    for(int i=0;i<n;i++)
        for(int j=3;j<6&&i+j<=n;j++)
        {
            if(dp[i+j]>dp[i]+a[i+j-1].first-a[i].first)
            {
                dp[i+j]=dp[i]+a[i+j-1].first-a[i].first;
                prev_team[i+j]=i;
            }
        }
    
    vi teams(n);
    int team=1,student=n;
    while(student!=0)
    {
        for(int i=student-1;i>=prev_team[student];i--) teams[a[i].second]=team;
        team++;
        student=prev_team[student];
    }

    cout<<dp[n]<<" "<<team-1<<"\n";
    for(auto &x: teams) cout<<x<<" ";
    cout<<"\n";
    return 0;
}
