/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

/* this is in c++
   calculate the function called nCr */

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);
	
//start the main function	
int main() 
{
	int n, r;
	std::cout << "Enter a value for n ";
	std::cin >> n;
	std::cout << "Enter a value for r ";
	std::cin >> r;
	std::cout << "nCr--------= " << nCr(n,r);
	std::cout << std::endl;
	
	//end of the main function
	return 0;
}
	
long nCr(int n, int r)
{
	int i;
	int re=1;
	int p;
	int k=1;
	
	for( i = 1 ; i <= r ; i++ )
	{
		re = re * i;
	}
	
	std :: cout << "r!=----------" << re;
	std::cout<<	std::endl;
	
	p=(n-r);
	
	for( i=1 ; i<= p ; i++ )
	{
		k= k * i;
	}
	
	std :: cout << "n-r!=----------" << k;
	std::cout<<	std::endl;
	
	return Factorial(n) /( re * k);
	
	
}

long Factorial(int no)
{
	int i;
	int factorial=1;
	
	for( i = 1 ; i <= no ; i++ )
	{
		factorial = factorial * i;
	}
	
	std :: cout << "n!=----------" << factorial;
	std::cout<<	std::endl;
	
	return factorial;
}
