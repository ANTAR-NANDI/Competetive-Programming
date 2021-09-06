#include<bits/stdc++.h>
using namespace std;
int main()
{
      double ammount,rest;
      unsigned int draw;
      cin>>draw>>ammount;
      	if(draw%5!=0||draw>ammount||(draw+0.5)>ammount)
	  {
	  	printf("%.2lf\n",ammount);
	  }
	  else{
	  	printf("%.2lf\n",ammount-(draw+0.5));
	  }
      
	
	return 0;
}
