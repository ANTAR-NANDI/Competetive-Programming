#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 mod(i64 n , i64 p, i64 m)
{
    if (p == 0) return 1;
    else if(p%2 == 0)
    {
        i64 r = mod(n,p/2,m);
        return ((r%m)*(r%m))%m;
    }
    else return ((n%m)*(mod(n,p-1,m)%m))%m;
}
//-17%5
//=(-17+100)%5
//=83%5
//=3
int main()
{
    int n,m,p;
    cin>>n>>m;
    if(n<0)
    {
        int t = (abs(n)/m)+1;
        cout<<(m*t + n)%m;
    }
    else 
	{
		cin>>p;
		cout<<mod(n,p,m);
	}
	
return 0;
}
