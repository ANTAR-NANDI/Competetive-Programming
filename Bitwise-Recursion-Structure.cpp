#include<bits/stdc++.h>
using namespace std;
struct Person{
  	int roll;
  	string name;
  };
int main()
  
{
	int a,b;
	struct Person Antar,Rimon;
	cin>>Antar.name>>Rimon.name;
	cin>>Antar.roll>>Rimon.roll;
	cout<<Antar.name<<" "<<Rimon.name;
	cin>>a>>b;
	cout<<(a&b);
}
