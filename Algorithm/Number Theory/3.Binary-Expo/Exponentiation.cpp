#include<bits/stdc++.h>
using namespace std;
  int expo(long int base,long int power)
  {
  	long long int result=1,i;
  	for(i=1;i<=power;i++)
  	{
  		result=result*base;
    }
		  	  return result;
  }
  long long int square(long long int x)
  {
  	return x*x;
  }
  long long int fastexpo(long long int base,long long int power)
  {
  	 if(power==0)
  	 {
  	 	return 1;
	   }
	   else if(power%2==0)
	   {
	   	 return square(fastexpo(base,power/2));
	   }
	   else{
	   	return base*(fastexpo(base,power-1));
	   }
  }
int main()
{
	long long int base,power,r;
	cin>>base>>power;
//	r=expo(base,power);
	r=fastexpo(base,power);
	cout<<r;
}
