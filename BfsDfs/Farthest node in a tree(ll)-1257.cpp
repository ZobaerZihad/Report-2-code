    #include <bits/stdc++.h>

    #define pii             pair <int,int>
    #define sc              scanf
    #define pf              printf
    #define Pi              2*acos(0.0)
    #define ms(a,b)         memset(a, b, sizeof(a))
    #define pb(a)           push_back(a)
    #define MP              make_pair
    #define db              double
    #define ll              long long
    #define EPS             10E-10
    #define ff              first
    #define ss              second
    #define sqr(x)          (x)*(x)
    #define D(x)            cout<<#x " = "<<(x)<<endl
    #define VI              vector <int>
    #define DBG             pf("Hi\n")
    #define MOD             100007
    #define MAX             30001
    #define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
    #define SZ(a)           (int)a.size()
    #define sf(a)           scanf("%d",&a)
    #define sff(a,b)        scanf("%d%d",&a,&b)
    #define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
    #define loop(i,n)       for(int i=0;i<n;i++)
    #define REP(i,a,b)      for(int i=a;i<b;i++)
    #define TEST_CASE(t)    for(int z=1;z<=t;z++)
    #define PRINT_CASE      printf("Case %d:\n",z)
    #define all(a)          a.begin(),a.end()
    #define intlim          2147483648
    #define inf             1000000
    #define ull             unsigned long long


    using namespace std;

    vector<int> graph[MAX],cost[MAX];

    int dis[MAX];
    int dis1[MAX];
    int a,b,max_dis,n;

    void BFS(int src)
    {
        dis[src]=0;
        queue<int>Q;
        Q.push(src);
        while(!Q.empty())
        {
            int u= Q.front();
            Q.pop();
            if(dis[u]>max_dis)
            {
                max_dis=dis[u];
                a=u;
            }
            loop(i,SZ(graph[u]))
            {
                int v=graph[u][i];
                if(dis[v]==-1)
                {
                    dis[v]=dis[u]+cost[u][i];
                    Q.push(v);
                }
            }
        }
    }

    void BFS1(int src)
    {
        dis1[src]=0;
        queue<int>Q;
        Q.push(src);
        while(!Q.empty())
        {
            int u= Q.front();
            Q.pop();
            loop(i,SZ(graph[u]))
            {
                int v=graph[u][i];
                if(dis1[v]==-1)
                {
                    dis1[v]=dis1[u]+cost[u][i];
                    Q.push(v);
                }
            }
        }
    }

    void allclear()
    {
        loop(i,n+1)
        {
            graph[i].clear();
            cost[i].clear();
            dis[i]=-1;
            dis1[i]=-1;
        }
        max_dis=-1;
        a=b=-1;
    }

    int main()
    {

        int t,x,y,w;
        sf(t);

        TEST_CASE(t)
        {
            sf(n);
            allclear();
            loop(i,n-1)
            {
                sfff(x,y,w);
                graph[x].pb(y);
                graph[y].pb(x);
                cost[x].pb(w);
                cost[y].pb(w);
            }
            BFS(0);
            b=a;
            loop(i,n+1)
                dis[i]=-1;
            max_dis=-1;
            BFS(b);
            b=a;
            BFS1(b);
            PRINT_CASE;
            loop(i,n)
            {
                pf("%d\n",max(dis[i],dis1[i]));
            }
        }
        return 0;
    }
