#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

i64 mod(i64 n , i64 p, i64 m)
{
    if (p == 0) return 1;
    else if(p%2 == 0)
    {
        i64 r = mod(n,p/2,m);
        cout<<((r%m)*(r%m))%m<<" ";
        return ((r%m)*(r%m))%m;
    }
    else return ((n%m)*(mod(n,p-1,m)%m))%m;
}
int main()
{
    i64 n = 2, p = 5, m = 3;
    cout<<mod(n,p,m);
return 0;
}
