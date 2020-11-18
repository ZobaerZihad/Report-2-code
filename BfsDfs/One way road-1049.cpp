#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=1;i<=n;i++)
#define py printf("YES\n")
#define pn printf("NO\n")
#define pb push_back
#define ll long long
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define D(x) cout << #x " = " << (x) << endl
#define endl "\n"
#define t(tt,val) printf("Case %d: %d\n",tt,val)
using namespace std;
vector<int>adj[105];
bool left_pos[110], right_pos[105];
int main()
{
int t;
cin>>t;
fr(i,t)
{
    int n,a,b,c;
    cin>>n;
    memset(left_pos,0,sizeof left_pos);
      memset(right_pos,0,sizeof right_pos);
     int left_cost=0,right_cost=0;
    f(j,n)
    {
        cin>>a>>b>>c;
        if(left_pos[a]==0&&right_pos[b]==0)
        {
            left_pos[a]=right_pos[b]=1;
            left_cost+=c;
        }
        else
        {
            right_pos[a]=left_pos[b]=1;
            right_cost+=c;
        }

    }
    t(i,min(left_cost,right_cost));
}


}
