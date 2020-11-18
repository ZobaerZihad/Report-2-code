#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 10;

int slove(int m)
{
    int ans = 0;
    while(m)
    {
        ans += m/5;
        m /= 5;
    }
    return ans;
}

int main()
{

    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; ++t)
    {
        int q;
        scanf("%d", &q);
        int l = 0, r = inf;
        while(l <= r)
        {
            int mid = l + (r - l)/2;
            if(slove(mid) >= q)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if(slove(l) == q)
            printf("Case %d: %d\n", t, l);
        else
            printf("Case %d: impossible\n", t);
    }
    return 0;
}
