/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<ll,char>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m;

    sffl(n,k);

    set<ll> s;
    for(i=0;i<n;i++)
        sfl(m), s.insert(m);

    ll cnt=0;
    for(i=0;i<k;i++)
    {
        if(!s.size()){pfs("0\n");continue;}
        auto itr = s.begin();

        pfl(*itr-cnt);pfs("\n");
        cnt+=(*itr-cnt);
        s.erase(*itr);
    }

    return 0;
}
