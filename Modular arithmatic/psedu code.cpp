#include<bits/stdc++.h>
#define mx 100000
#define ll long long
using namespace std;
vector<int>v;
long long m=1000000007;
bool vis[mx];
void sieve()
{
    vis[0]=vis[1]=1;
    int q=sqrt(mx);
    for(int i=2;i<=q;i++)
    {
        if(vis[i]==0)
            {
                for(int j=i*i;j<=mx;j+=i)
        {
            vis[j]=1;
            if(i%2==1)
                j+=i;
        }
            }

    }
        for(int i=2; i<=mx; i++)
{
        if(vis[i]==0) v.push_back(i);
    }


}
ll bigmod(ll p,ll q)
{
    if(q==0) return 1;
    if(q%2==0)
    {
        ll x=bigmod(p,q/2)%m;
        return ((x*x)%m);
    }
    else
        return ((p%m)*bigmod(p,q-1)%m)%m;
}
ll modinverse(ll p)
{
    return bigmod(p,m-2);
}

long long factorize(ll p,ll q)
{
    ll sum=1,x,y,c,s;
    ll root=sqrt(p);
    ll k=p;

    for(int i=0;v[i]<=root;i++)
    {
        if(k%v[i]==0)
        {
             c=0;
            while(k%v[i]==0)
            {
                k/=v[i];
                c++;
            }
            root=sqrt(k);
            x=bigmod(v[i],(c*q)+1);
         y=modinverse(v[i]-1);
         s=((x-1+m)%m*(y+m)%m)%m;
    sum=((sum)%m*s%m)%m;
        }

    }

    if(k>1)
    {
        x=bigmod(k,q+1);
         y=modinverse(k-1);
         s=((x-1+m)%m*(y+m)%m)%m;
    sum=((sum%m)*(s%m))%m;
    }
    return sum;
}
int main()
{
ll p,q,t;
   sieve();
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       cin>>p>>q;
   cout<<"Case "<<i<<": "<<factorize(p,q)<<endl;
   }

    }


