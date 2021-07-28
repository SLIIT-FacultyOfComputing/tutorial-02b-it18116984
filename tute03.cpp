/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

/* this is in c++
   calculates the Factorial of a number*/
   
#include<iostream>
#include<iomanip>

using namespace std;

//start the main function
int main()
{
	int no; 
	long fac;
	
	cout << "Enter a Number : ";// input the number
	cin >> no;// read the number
	
	fac = 1;
	
	for (int r=no; r >= 1; r--)
    {
		fac = fac * r;// calculate the faction
	}
	
	cout << "Factorial of " << no << " is " << fac;//output
	
	return 0;
	//end of the main function
	
 }
