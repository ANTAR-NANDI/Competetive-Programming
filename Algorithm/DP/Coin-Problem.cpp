#include<bits/stdc++.h>
using namespace std;
int c[100],d[4];
int f(int x)
 { 
 //cout<<x<<" ";
  int k=3,p;
// if (x < 0) return 1e9; 
// if (x == 0) return 0; 
// int u = 1e9; 
// for (int i = 1; i <= k; i++)
//  { 
//  u = min(u, f(x-c[i])+1); //1 3 4
//  } 
//  return u;
//-------------------------//----------------------//-----------------------------
//  if (x < 0) return 1e9;
//   if (x == 0) return 0; 
//  // cout<<d[x];
//   if (d[x]) return d[x];
//    int u = 1e9;
//	 for (int i = 1; i <= k; i++) 
//	 { u = min(u, f(x-c[i])+1); }
//	  d[x] = u;
//	   return d[x];
//-------------------------//----------------------//-----------------------------
   d[0] = 0;
    for (int i = 1; i <= x; i++)
	 { int u = 1e9;
	  for (int j = 1; j <= k; j++)
	   { if (i-c[j] < 0)
	    continue;
		 u = min(u, d[i-c[j]]+1);
		  }
		   d[i] = u;
		   p=u;
		   }
		   return p;
}
int main()
{
  int n;
  for(int i=1;i<=3;i++)
  {
  	cin>>c[i];
  }
  cout<<f(5);
}
