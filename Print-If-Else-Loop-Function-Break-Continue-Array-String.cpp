#include<bits/stdc++.h>
using namespace std;
void print(int array[],int test)
{
	int i;
	for(i=1;i<test;i++)
	{
		if(array[i]%2==0)
		{
			continue;
		}
		cout<<array[i];
	}
}
int main()
{
	printf("Welcome to Computer Programming");
	int num,i,array[10],test;
	char s[100];
	cin>>s;
	cout<<s<<<<" "<<strlen(s);
	cin>>num;
	while(num!=0)
	{
		if(num%2==0)
		{
			cout<<num;
			num--;
		}
		else{
			break;
		}
	}
	cin>>test;
	for(i=0;i<test;i++)
	{
		cin>>array[i];
	}
	
	print(array,test);
	
	return 0;
}

