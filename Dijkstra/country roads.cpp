#include<bits/stdc++.h>
#define fi(n, m) for(int i=n; i<=m; i++)
#define fd(n, m) for(int i=n; i>=m; i--)
#define inf  100009
using namespace std;

vector<int>vt[505], cost[505];
int dis[505]={0};

void bfs(int st){
    queue<int>q;
    q.push(st);
    dis[st]=0;
    int p, sz, temp, xx;
    while(!q.empty()){
        p=q.front();
        q.pop();
            sz=vt[p].size();
            fi(0, sz-1){
                xx=vt[p][i];
                temp=max(dis[p], cost[p][i]);
                if(temp<dis[xx]){
                    dis[xx]=temp;
                    q.push(xx);
                }
            }
    }
}

int main(){
    int t, cs=1, n, m, u, v, w, tt;
    cin>>t;
    while(t--){
        cin>>n>>m;
        fi(0, m-1){
            cin>>u>>v>>w;
            vt[u].push_back(v);
            vt[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        cin>>tt;
        fi(0, n-1) dis[i]=inf;
        bfs(tt);
        cout<<"Case "<<cs++<<":"<<endl;
        fi(0, n-1){
            if(dis[i]==inf)cout<<"Impossible"<<endl;
            else cout<<dis[i]<<endl;
        }
        fi(0, n-1){
            vt[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
