
#include <bits/stdc++.h> 
using namespace std; 

// Class declaration 
class Number { 
private: 
	int a, b; 

public: 
	// Constructors 
	Number(int x, int y) 
	{ 
		a = x; 
		b = y; 
	} 

	// Function that find the GCD 
	int gcd() 
	{ 
		
		while (a != b) { 

			if (a > b) 
				a = a - b; 

			else
				b = b - a; 
		} 

		return a; 
	} 

	// Function to check prime or not
	bool isPrime(int n) 
	{ 
		// Base Case 
		if (n <= 1) 
			return false; 

		
		for (int i = 2; i < n; i++) { 

			
			if (n % i == 0) 
				return false; 
		} 

		return true; 
	} 
}; 

class MyPrimeException { 
}; 

// Driver Code 
int main() 
{ 
	int x = 13, y = 56; 

	Number num1(x, y); 

	// Print the GCD of X and Y 
	cout << "GCD is = "
		<< num1.gcd() << endl; 

	// If X is prime 
	if (num1.isPrime(x)) 
		cout << x 
			<< " is a prime number"
			<< endl; 

	// If Y is prime 
	if (num1.isPrime(y)) 
		cout << y 
			<< " is a prime number"
			<< endl; 

	// Exception Handling 
	if ((num1.isPrime(x)) 
		|| (num1.isPrime(y))) { 

		// Try Block 
		try { 
			throw MyPrimeException(); 
		} 

		// Catch Block 
		catch (MyPrimeException t) { 

			cout << "Caught exception "
				<< "of MyPrimeException "
				<< "class." << endl; 
		} 
	} 

	return 0; 
} 
