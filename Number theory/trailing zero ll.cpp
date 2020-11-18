#include<bits/stdc++.h>
#define mx 1000005
using namespace std;
int no2,no5;
int calc(int n,int r)
{
    int num=0;
    while(n>0)
    {
        num+=n/r;n/=r;
    }
    return num;
}
void calculate(int n,int r)
{
    int a2=calc(n,2);
    int a5=calc(n,5);
    int b2=calc(r,2);
    int b5=calc(r,5);
    int c2=calc(n-r,2);
    int c5=calc(n-r,5);
    no2=a2-(b2+c2);
    no5=a5-(b5+c5);

}
int prime(int p,int q)
{
    int nu=0;
    while(p>0&&!(p%q))
          {
              p=p/q;
              nu++;
          }
          return nu;
}
int main()
{
    int n,r,p,q,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>r>>p>>q;
    calculate(n,r);
    no2+=prime(p,2)*q;
    no5+=prime(p,5)*q;
    int zero=min(no2,no5);
    cout<<"Case "<<i<<": "<<zero<<endl;
    no2=0;
    no5=0;
    }


}
