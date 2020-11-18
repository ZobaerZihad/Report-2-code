#include<bits/stdc++.h>
#define pii              pair <int,int>
#define pll              pair <long long,long long>
#define sc               scanf
#define pf               printf
#define Pi               2*acos(0.0)
#define ms(a,b)          memset(a, b, sizeof(a))
#define pb(a)            push_back(a)
#define MP               make_pair
#define db               double
#define ll               long long
#define EPS              10E-10
#define ff               first
#define ss               second
#define sqr(x)           (x)*(x)
#define D(x)             cout<<#x " = "<<(x)<<endl
#define VI               vector <int>
#define DBG              pf("Hi\n")
#define MOD              10000019
#define CIN              ios_base::sync_with_stdio(0); cin.tie(0)
#define SZ(a)            (int)a.size()
#define sf(a)            scanf("%d",&a)
#define sfl(a)           scanf("%lld",&a)
#define sff(a,b)         scanf("%d %d",&a,&b)
#define sffl(a,b)        scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define stlloop(v)       for(__typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define loop(i,n)        for(int i=0;i<n;i++)
#define REP(i,a,b)       for(int i=a;i<b;i++)
#define RREP(i,a,b)      for(int i=a;i>=b;i--)
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)
#define CASE_PRINT       cout<<"Case "<<z<<": "
#define all(a)           a.begin(),a.end()
#define intlim           2147483648
#define infinity         (1<<28)
#define ull              unsigned long long
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))

#define MAX 100005
using namespace std;
bool p[MAX+2];
vector<int>prime;

void sieve()
{
    p[0]=p[1]=1;
    int root=sqrt(MAX);
    for(int i=2; i<=root; i++)
    {
        if(p[i]==0)
        {
            //prime.push_back(i);
            for(int j=i*i; j<=MAX; j+=i)
            {
                p[j]=1;
                if(i%2==1) j+=i;
            }
        }
    }
    for(int i=2; i<=MAX; i++)
    {
        if(p[i]==0) prime.push_back(i);
    }
}
ll bigmod(ll n, ll pow, ll mod)
{
    if(pow==0) return 1;
    if(pow%2==0)
    {
        ll ret=bigmod(n,pow/2,mod)%mod;
        return (ret*ret)%mod;
    }
    return ((n%mod)*(bigmod(n,pow-1,mod)%mod))%mod;
}


ll factorial_factor(int n, int t)
{
    ll ans=1;

    for(int i=0;i<SZ(prime) && prime[i]<=n;i++)
    {
        int nn=n;
        ll sum=0;
        while(nn/prime[i])
        {
            sum+=nn/prime[i];
            nn/=prime[i];
        }
        if(sum>=t)
        {
            sum/=t;
            ans*=bigmod(prime[i],sum,MOD);
            ans%=MOD;
        }
    }
    return ans;
}
int main()
{
    sieve();
    int t;
    sf(t);
    TEST_CASE(t)
    {
        int a,b;
        sff(a,b);
        ll xx=factorial_factor(a,b);
        PRINT_CASE;
        if(xx==1)
            pf("-1\n");
        else
            pf("%lld\n",xx);
    }

    return 0;
}
