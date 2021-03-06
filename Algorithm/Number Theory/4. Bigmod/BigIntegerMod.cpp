// C++ program to compute mod of a big number represented 
// as string 
#include<iostream> 
using namespace std; 

// Function to compute num (mod a) 
int mod(string num, int a) 
{ 
	// Initialize result 
	int res = 0; 

	// One by one process all digits of 'num' 
	for (int i = 0; i < num.length(); i++) 
		res = (res*10 + (int)num[i] - '0') %a; 

	return res; 
} 

// Driver program 
int main() 
{ 
	string num = "1231676767867800000000"; 
	cout << mod(num, 9); 
	return 0; 
} 

