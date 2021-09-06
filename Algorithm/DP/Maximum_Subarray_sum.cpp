#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main()
{
	ios_base::sync_with_stdio(0);
	 cin.tie(0);
	 int x[100]={-1,2,4,-3,5,2,-5,2};//
	 int p = 0,n=8; 
	int s = 0; 
	for (int k = 0; k < n; k++)
	 {
	 	int t=s+x[k];
	  s = max(x[k],s+x[k]);
	  
	   p = max(p,s);
cout<<"max("<<x[k]<<","<<t<<")-"<<s<< "  "<<p<<endl;
	    } 
		cout << p << "\n";

	
	
	return 0;
}
