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
#define INF INT_MAX
using namespace std;
int dp[55][1005];
int coins[55], coinsvalue[55], n, k;

ll call (int pos, int sum) {

    if(sum == k) return 1;
    if(pos == n) return 0;
    if (dp[pos][sum] != -1) return dp[pos][sum];

    int modd = 100000007;
    ll cnt = 0;
    for (int i = 0; i <= coinsvalue[pos] && (i * coins[pos]) + sum <= k; ++i) {
        cnt += call(pos + 1, sum + i * coins[pos]);
        cnt = cnt % modd;
    }

    return dp[pos][sum] = cnt;
}

int main()
{
  	speed;
  	 int cases, caseno = 0;
  	 cin>>cases;
  	 while(cases--)
     {

         cin>>n>>k;
         f(i,n)
         cin>>coins[i];
         f(i,n)
         cin>>coinsvalue[i];
          memset(dp, -1, sizeof(dp));
          printf("Case %d: %lld\n", ++caseno, call(0, 0));
     }
    }


