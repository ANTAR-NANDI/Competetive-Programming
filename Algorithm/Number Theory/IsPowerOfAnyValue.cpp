// CPP program to find if a number 
// can be expressed as x raised to 
// power y. 
#include <bits/stdc++.h> 
using namespace std; 

bool isPower(unsigned int n) 
{ 
	// Find Log n in different bases 
	// and check if the value is an 
	// integer 
	for (int x=2; x<=sqrt(n); x++) { 
		float f = log(n) / log(x); 
		if ((f - (int)f) == 0.0) 
			return true;		 
	} 
	return false; 
} 

// Driver code 
int main() 
{ 
	for (int i = 2; i < 100000000; i++) 
		if (isPower(i)) 
			cout << i << " "; 
	return 0; 
} 

