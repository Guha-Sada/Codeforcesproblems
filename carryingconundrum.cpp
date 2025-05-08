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
        int n;cin>>n;
        
        int pow1=0,pow2=0,num1=0,num2=0;
        
        bool flip=true;
        
        while(n)
        {
            if(flip)
            {    
                num1+=(n%10)*pow(10,pow1++);
                flip=false;
            }
            else  
            {
                num2+=(n%10)*pow(10,pow2++);
                flip=true;
            }
            n/=10;
        }

        //cout<<"\n"<<num1<<" "<<num2<<"\n";
        cout<<(num1+1)*(num2+1)-2<<"\n";
    }

    return 0;
}


