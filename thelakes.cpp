#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>> vpi;
typedef vector<set<int>> vsi;
typedef long long ll;
typedef pair<int,int> pii;

    
map<pii,bool> visited;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

ll bfs(vvi& grid,pii& start,int n, int m)
{
    queue<pii> depths;
    depths.push(start);

    ll vol=grid[start.first][start.second];
    //cout<<"\nInit Volume= "<<vol;

    visited[start]=true;

    while(!depths.empty())
    {
        auto cur=depths.front();
        depths.pop();
        for(int dir=0;dir<4;dir++)
        {
            auto nxt=cur;
            nxt.first+=dx[dir],nxt.second+=dy[dir];
            
            if(nxt.first<0||nxt.first>=n||nxt.second<0||nxt.second>=m) continue;
            if(!grid[nxt.first][nxt.second]||visited[nxt]) continue;
            
            vol+=grid[nxt.first][nxt.second];
            //cout<<"\nNext= "<<vol;
            depths.push(nxt);
            visited[nxt]=true;            
        }
    }
    return vol;
}


int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t;cin>>t;

	while(t--)
	{
        int n,m; cin>>n>>m;
        bool first;
        vpi starts;
        vvi grid(n,vi(m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                cin>>grid[i][j];
                visited[{i,j}]=false;
                if(grid[i][j])
                { 
                    first=true;
                    starts.push_back({i,j});
                }
            }  
	        
        if(!first)
        {
            cout<<"0\n";
            continue;
        }

        ll vol=0;
        for(int i=0;i<int(starts.size());i++)
        { 
            if(!visited[starts[i]]) vol=max(vol,bfs(grid,starts[i],n,m));
        }

        cout<<vol<<"\n";
    }

	return 0;
}
