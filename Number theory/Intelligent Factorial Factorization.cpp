#include<bits/stdc++.h>
#include<stdio.h>
#define mx 1000000
using namespace std;
int idx=0;
vector<int>prime;
bool vis[1000005];
int sieve()
{

	int a[102];
	memset(a, 0, sizeof(a));

	for (int i = 2; i <= 100; i++) {

		if(a[i] == 0) {
			prime.push_back(i);
			for (int j = 2 * i; j <= 100; j = j + i) {
				a[j] = 1;
			}
		}

	}



}

int main()
{
    int t;
    sieve();
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,a[105],ans[105];
        cin>>n;
        memset(ans,0,sizeof(ans));
        for(int j=1;j<=n;j++)
            a[j]=j;
        for(int j=0;j<prime.size()&&prime[j]<=n;j++)
        {
            int t=prime[j];
            for(int k=t;k<=n;k+=t)
            {
                while(a[k]%t==0)
                {
                    a[k]/=t;
                    ans[t]++;
                }
            }
        }
        printf("Case %d: %d = ", i, n);
		for (int j = 0; prime[j] <= n && j < prime.size(); j++) {
			printf("%d (%d)",prime[j], ans[prime[j]]);
			if(j!= prime.size() - 1 && prime[j+1] <= n) {
				printf(" * ");
			}
		}

		printf("\n");
    }
}
